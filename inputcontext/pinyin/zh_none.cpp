#include <QChar>
#include <QVarLengthArray>

#include "zh.h"

// characters from http://www.chinese-tools.com/tools/sinograms.html

namespace zh {

    constexpr static const std::uint16_t a[] = {
        0x5416, 0x5391, 0x963F, 0x5475, 0x554A, 0x814C, 0x9515, 0x55C4, 0x9312,
        0x5B36,
    };
    constexpr static const std::uint16_t a1[] = {
        0x5416, 0x554A, 0x963F, 0x5475, 0x814C, 0x9515, 0x9312, 0x5B36,
    };
    constexpr static const std::uint16_t a2[] = {
        0x554A, 0x55C4, 0x5475,
    };
    constexpr static const std::uint16_t a3[] = {
        0x554A, 0x963F, 0x5475,
    };
    constexpr static const std::uint16_t a4[] = {
        0x5475, 0x554A, 0x963F,
    };
    constexpr static const std::uint16_t a5[] = {
        0x554A, 0x5391, 0x963F, 0x5475,
    };

    constexpr static const std::uint16_t ai[] = {
        0x4F0C, 0x4F41, 0x50FE, 0x51D2, 0x53C6, 0x54C0, 0x54CE, 0x5509, 0x5540,
        0x55CC, 0x55F3, 0x560A, 0x566B, 0x566F, 0x57C3, 0x5828, 0x5867, 0x58D2,
        0x5A2D, 0x5A3E, 0x5AD2, 0x5B21, 0x5D66, 0x611B, 0x61D3, 0x61DD, 0x6328,
        0x66A7, 0x6573, 0x6639, 0x66D6, 0x6B38, 0x6BD0, 0x6EB0, 0x6EBE, 0x6FED,
        0x7231, 0x7477, 0x74A6, 0x764C, 0x7691, 0x769A, 0x76A7, 0x77B9, 0x77EE,
        0x7839, 0x784B, 0x7859, 0x788D, 0x78D1, 0x7919, 0x827E, 0x853C, 0x8586,
        0x85F9, 0x8B6A, 0x8B7A, 0x8BF6, 0x8CF9, 0x8EB7, 0x9384, 0x9440, 0x953F,
        0x9628, 0x9698, 0x972D, 0x9744, 0x9749, 0x9932, 0x99A4, 0x9B5E, 0x9C5B,
        0x9C6B, 0x9D31, 0x7D60, 0x9691, 0x6B2C, 0x5117, 0x7125, 0x8AF0,
    };
    constexpr static const std::uint16_t ai1[] = {
        0x54C0, 0x54CE, 0x5509, 0x55F3, 0x566F, 0x57C3, 0x5A2D, 0x6328, 0x6B38,
        0x6EBE, 0x8BF6, 0x9384, 0x953F, 0x9C5B, 0x8AF0,
    };
    constexpr static const std::uint16_t ai2[] = {
        0x51D2, 0x5540, 0x560A, 0x5A3E, 0x5D66, 0x6328, 0x6371, 0x6571, 0x6573,
        0x6EB0, 0x764C, 0x7691, 0x769A, 0x7859, 0x78D1, 0x9691,
    };
    constexpr static const std::uint16_t ai3[] = {
        0x4F41, 0x55F3, 0x566B, 0x566F, 0x5A3E, 0x6639, 0x6B38, 0x6BD0, 0x6FED,
        0x77EE, 0x853C, 0x85F9, 0x8B6A, 0x8EB7, 0x972D, 0x9744, 0x99A4, 0x7D60,
    };
    constexpr static const std::uint16_t ai4[] = {
        0x4F0C, 0x50FE, 0x53C6, 0x5509, 0x55CC, 0x55F3, 0x566B, 0x566F, 0x5828,
        0x5867, 0x58D2, 0x5AD2, 0x5B21, 0x611B, 0x61D3, 0x61DD, 0x66A7, 0x66D6,
        0x6FED, 0x7231, 0x7477, 0x74A6, 0x76A7, 0x77B9, 0x7839, 0x784B, 0x788D,
        0x7919, 0x827E, 0x8586, 0x8B6A, 0x8B7A, 0x8CF9, 0x9440, 0x9628, 0x9698,
        0x9749, 0x9932, 0x99A4, 0x9B5E, 0x9D31, 0x6B2C, 0x5117, 0x7125,
    };
    constexpr static const std::uint16_t ai5[] = {
        0x9C6B,
    };

    constexpr static const std::uint16_t an[] = {
        0x4F92, 0x4FFA, 0x5111, 0x5382, 0x5388, 0x5535, 0x557D, 0x57B5, 0x57EF,
        0x5813, 0x5A95, 0x5B89, 0x5C75, 0x5CB8, 0x5CD6, 0x5E7F, 0x5EB5, 0x6309,
        0x63DE, 0x667B, 0x6697, 0x6848, 0x6849, 0x6C28, 0x6D1D, 0x72B4, 0x73B5,
        0x75F7, 0x76E6, 0x76EB, 0x7F6F, 0x80FA, 0x8164, 0x834C, 0x834F, 0x843B,
        0x844A, 0x84ED, 0x8A9D, 0x8AF3, 0x8C19, 0x8C7B, 0x92A8, 0x930C, 0x94F5,
        0x95C7, 0x968C, 0x96F8, 0x978C, 0x978D, 0x97FD, 0x99A3, 0x9B9F, 0x9D6A,
        0x9D95, 0x9E4C, 0x9EEF, 0x54B9, 0x5C7D, 0x8C8B, 0x5063, 0x5A69, 0x88FA,
    };
    constexpr static const std::uint16_t an1[] = {
        0x4F92, 0x5382, 0x557D, 0x5A95, 0x5B89, 0x5CD6, 0x5EB5, 0x6849, 0x6C28,
        0x75F7, 0x76E6, 0x76EB, 0x8164, 0x834F, 0x843B, 0x844A, 0x84ED, 0x8A9D,
        0x8AF3, 0x8C19, 0x92A8, 0x94F5, 0x95C7, 0x978C, 0x978D, 0x97FD, 0x99A3,
        0x9B9F, 0x9D6A, 0x9D95, 0x9E4C, 0x5063, 0x88FA,
    };
    constexpr static const std::uint16_t an2[] = {
        0x5111, 0x557D, 0x72B4, 0x73B5, 0x96F8,
    };
    constexpr static const std::uint16_t an3[] = {
        0x4FFA, 0x5535, 0x57B5, 0x57EF, 0x63DE, 0x667B, 0x7F6F, 0x834F, 0x92A8,
        0x94F5, 0x968C,
    };
    constexpr static const std::uint16_t an4[] = {
        0x5111, 0x5388, 0x5813, 0x5C75, 0x5CB8, 0x6309, 0x667B, 0x6697, 0x6848,
        0x6849, 0x6D1D, 0x72B4, 0x80FA, 0x834C, 0x8C7B, 0x930C, 0x95C7, 0x968C,
        0x9B9F, 0x9EEF, 0x54B9, 0x5C7D, 0x8C8B, 0x5A69,
    };

    constexpr static const std::uint16_t ang[] = {
        0x4EF0, 0x536C, 0x5C87, 0x6602, 0x663B, 0x678A, 0x76CE, 0x80AE, 0x8EEE,
        0x814C, 0x91A0, 0x96F5, 0x9AAF,
    };
    constexpr static const std::uint16_t ang1[] = {
        0x80AE, 0x814C, 0x9AAF,
    };
    constexpr static const std::uint16_t ang2[] = {
        0x4EF0, 0x536C, 0x5C87, 0x6602, 0x663B,
    };
    constexpr static const std::uint16_t ang3[] = {
        0x8EEE, 0x96F5,
    };
    constexpr static const std::uint16_t ang4[] = {
        0x678A, 0x76CE, 0x91A0,
    };

    constexpr static const std::uint16_t ao[] = {
        0x50B2, 0x51F9, 0x53AB, 0x55F7, 0x55F8, 0x5773, 0x5787, 0x58BA, 0x5961,
        0x5965, 0x5967, 0x5AAA, 0x5ABC, 0x5AEF, 0x5C99, 0x5CB0, 0x5D85, 0x5DB4,
        0x5ED2, 0x6160, 0x61CA, 0x6277, 0x629D, 0x62D7, 0x646E, 0x64D9, 0x6556,
        0x67EA, 0x688E, 0x6EF6, 0x6F9A, 0x6FB3, 0x71AC, 0x720A, 0x7352, 0x7353,
        0x7488, 0x78DD, 0x7FF1, 0x7FF6, 0x7FFA, 0x8071, 0x8279, 0x82BA, 0x851C,
        0x87AF, 0x8884, 0x8956, 0x8B37, 0x8B38, 0x8EEA, 0x9068, 0x93CA, 0x93D6,
        0x957A, 0x969E, 0x96A9, 0x9A41, 0x9A9C, 0x9C32, 0x9CCC, 0x9DD4, 0x9F07,
        0x719D, 0x93D5, 0x58BD, 0x592D, 0x90E9, 0x7711, 0x6CD1,
    };
    constexpr static const std::uint16_t ao1[] = {
        0x51F9, 0x5773, 0x5787, 0x67EA, 0x688E, 0x71AC, 0x720A, 0x8EEA, 0x719D,
        0x7711, 0x6CD1,
    };
    constexpr static const std::uint16_t ao2[] = {
        0x53AB, 0x55F7, 0x55F8, 0x5961, 0x5D85, 0x5ED2, 0x6160, 0x646E, 0x6556,
        0x6EF6, 0x71AC, 0x720A, 0x7352, 0x7353, 0x7488, 0x78DD, 0x7FF1, 0x7FF6,
        0x7FFA, 0x8071, 0x851C, 0x87AF, 0x8B37, 0x8B38, 0x9068, 0x93CA, 0x93D6,
        0x969E, 0x9A41, 0x9A9C, 0x9C32, 0x9CCC, 0x9DD4, 0x9F07, 0x93D5, 0x58BD,
        0x90E9,
    };
    constexpr static const std::uint16_t ao3[] = {
        0x5AAA, 0x5ABC, 0x629D, 0x62D7, 0x8279, 0x82BA, 0x8884, 0x8956, 0x957A,
        0x592D, 0x7711,
    };
    constexpr static const std::uint16_t ao4[] = {
        0x50B2, 0x5773, 0x5787, 0x58BA, 0x5961, 0x5965, 0x5967, 0x5AEF, 0x5C99,
        0x5CB0, 0x5D85, 0x5DB4, 0x6160, 0x61CA, 0x6277, 0x629D, 0x62D7, 0x64D9,
        0x6556, 0x6FB3, 0x8EEA, 0x93CA, 0x957A, 0x96A9, 0x9A41, 0x9A9C,
    };
    constexpr static const std::uint16_t ao5[] = {
        0x6F9A,
    };

    constexpr static const std::uint16_t e[] = {
        0x963F, 0x5828, 0x5A3E, 0x6239, 0x7828, 0x9628, 0x9638, 0x530E, 0x6D1D,
        0x75F7, 0x80FA, 0x86EF, 0x4ED2, 0x4FC4, 0x5054, 0x50EB, 0x537E, 0x5384,
        0x542A, 0x5443, 0x545D, 0x54A2, 0x54B9, 0x54E6, 0x5641, 0x5669, 0x56EE,
        0x57A9, 0x580A, 0x582E, 0x59B8, 0x59BF, 0x59F6, 0x5A25, 0x5A3F, 0x5A40,
        0x5C59, 0x5C8B, 0x5CC9, 0x5CE9, 0x5D3F, 0x5EC5, 0x6076, 0x60AA, 0x60E1,
        0x6115, 0x627C, 0x6424, 0x6439, 0x64DC, 0x65D5, 0x6799, 0x6AEE, 0x6B15,
        0x6B5E, 0x6D90, 0x6E42, 0x73F4, 0x7427, 0x75FE, 0x7692, 0x774B, 0x7808,
        0x7810, 0x7846, 0x78C0, 0x7918, 0x816D, 0x82CA, 0x83AA, 0x843C, 0x855A,
        0x8685, 0x86FE, 0x8741, 0x89A8, 0x8A1B, 0x8A90, 0x8AE4, 0x8B4C, 0x8B8D,
        0x8BB9, 0x8C14, 0x8C5F, 0x8EDB, 0x8EF6, 0x8F6D, 0x8FD7, 0x904C, 0x904F,
        0x907B, 0x9102, 0x920B, 0x922A, 0x92E8,
    };
    constexpr static const std::uint16_t e1[] = {
        0x963F, 0x86EF, 0x59B8, 0x59BF, 0x5A3F, 0x5A40, 0x5C59, 0x75FE,
    };
    constexpr static const std::uint16_t e2[] = {
        0x4FC4, 0x542A, 0x54E6, 0x5641, 0x56EE, 0x5A25, 0x5CC9, 0x5CE9, 0x6076,
        0x6799, 0x6D90, 0x73F4, 0x7692, 0x774B, 0x78C0, 0x83AA, 0x86FE, 0x8A1B,
        0x8A90, 0x8B4C, 0x8BB9, 0x8FD7, 0x920B, 0x92E8,
    };
    constexpr static const std::uint16_t e3[] = {
        0x7828, 0x9638, 0x5443, 0x5641, 0x5669, 0x57A9, 0x5A3F, 0x5D3F, 0x6076,
        0x60E1, 0x6115, 0x627C, 0x6799, 0x816D, 0x82CA, 0x843C, 0x8C14, 0x904C,
        0x904F, 0x9102,
    };
    constexpr static const std::uint16_t e4[] = {
        0x5828, 0x5A3E, 0x6239, 0x9628, 0x9638, 0x530E, 0x6D1D, 0x75F7, 0x80FA,
        0x5054, 0x50EB, 0x537E, 0x5384, 0x5443, 0x545D, 0x54A2, 0x54B9, 0x5669,
        0x57A9, 0x580A, 0x582E, 0x59F6, 0x5C8B, 0x5D3F, 0x5EC5, 0x6076, 0x60AA,
        0x60E1, 0x6115, 0x627C, 0x6424, 0x6439, 0x64DC, 0x6799, 0x6AEE, 0x6B5E,
        0x6E42, 0x7427, 0x7808, 0x7810, 0x7846, 0x7918, 0x816D, 0x82CA, 0x843C,
        0x855A, 0x8685, 0x8741, 0x89A8, 0x8AE4, 0x8B8D, 0x8C14, 0x8C5F, 0x8EDB,
        0x8EF6, 0x8F6D, 0x904C, 0x904F, 0x907B, 0x9102, 0x922A,
    };
    constexpr static const std::uint16_t e5[] = {
        0x4ED2, 0x5443, 0x65D5, 0x6B15,
    };

    constexpr static const std::uint16_t ei[] = {
        0x6B38, 0x8A92, 0x8BF6,
    };
    constexpr static const std::uint16_t ei1[] = {
        0x6B38, 0x8A92, 0x8BF6,
    };
    constexpr static const std::uint16_t ei2[] = {
        0x6B38, 0x8A92, 0x8BF6,
    };
    constexpr static const std::uint16_t ei3[] = {
        0x6B38, 0x8A92, 0x8BF6,
    };
    constexpr static const std::uint16_t ei4[] = {
        0x6B38, 0x8A92, 0x8BF6,
    };

    constexpr static const std::uint16_t en[] = {
        0x5CCE, 0x5940, 0x6069, 0x6441, 0x717E, 0x84BD,
    };
    constexpr static const std::uint16_t en1[] = {
        0x5940, 0x6069, 0x717E, 0x84BD,
    };
    constexpr static const std::uint16_t en3[] = {
        0x5CCE,
    };
    constexpr static const std::uint16_t en4[] = {
        0x6441,
    };

    constexpr static const std::uint16_t eng[] = {
        0x97A5,
    };
    constexpr static const std::uint16_t eng1[] = {
        0x97A5,
    };

    constexpr static const std::uint16_t er[] = {
        0x4E7B, 0x4E8C, 0x4F74, 0x4F95, 0x513F, 0x5150, 0x5152, 0x5235, 0x54A1,
        0x5532, 0x5C12, 0x5C13, 0x5C14, 0x5CCF, 0x5F0D, 0x5F10, 0x682D, 0x682E,
        0x6A32, 0x6BE6, 0x6D0F, 0x6D31, 0x723E, 0x73E5, 0x7CAB, 0x800C, 0x800F,
        0x8033, 0x804F, 0x80F9, 0x81D1, 0x834B, 0x85BE, 0x8848, 0x88BB, 0x8A80,
        0x8CAE, 0x8CB3, 0x8D30, 0x8DB0, 0x8F00, 0x8F5C, 0x8FE9, 0x9087, 0x927A,
        0x94D2, 0x9651, 0x96AD, 0x990C, 0x9975, 0x99EC, 0x9AF5, 0x9AF6, 0x9B9E,
        0x9C95, 0x9D2F, 0x9E38, 0x6752, 0x6895,
    };
    constexpr static const std::uint16_t er1[] = {
        0x4E7B, 0x513F, 0x5152, 0x7CAB, 0x8DB0,
    };
    constexpr static const std::uint16_t er2[] = {
        0x4F95, 0x513F, 0x5150, 0x5152, 0x5532, 0x5C14, 0x5CCF, 0x682D, 0x6D0F,
        0x800C, 0x800F, 0x804F, 0x80F9, 0x81D1, 0x834B, 0x88BB, 0x8F00, 0x8F5C,
        0x9651, 0x96AD, 0x9AF5, 0x9B9E, 0x9C95, 0x9D2F, 0x9E38, 0x6752, 0x6895,
    };
    constexpr static const std::uint16_t er3[] = {
        0x4F74, 0x5C12, 0x5C13, 0x5C14, 0x5CCF, 0x682E, 0x6BE6, 0x6D31, 0x723E,
        0x73E5, 0x8033, 0x85BE, 0x8848, 0x8A80, 0x8FE9, 0x9087, 0x927A, 0x94D2,
        0x990C, 0x9975, 0x99EC,
    };
    constexpr static const std::uint16_t er4[] = {
        0x4E8C, 0x4F74, 0x5235, 0x54A1, 0x5F0D, 0x5F10, 0x6A32, 0x6BE6, 0x8848,
        0x8CAE, 0x8CB3, 0x8D30, 0x927A, 0x94D2, 0x9AF6,
    };
    constexpr static const std::uint16_t er5[] = {
        0x7CAB, 0x8DB0,
    };

    constexpr static const std::uint16_t o[] = {
        0x54E6, 0x5684, 0x4E6F, 0x5594, 0x5662, 0x7B7D,
    };
    constexpr static const std::uint16_t o1[] = {
        0x5594, 0x5662,
    };
    constexpr static const std::uint16_t o2[] = {
        0x54E6,
    };
    constexpr static const std::uint16_t o3[] = {
        0x5684,
    };
    constexpr static const std::uint16_t o4[] = {
        0x54E6,
    };
    constexpr static const std::uint16_t o5[] = {
        0x4E6F, 0x7B7D,
    };

    constexpr static const std::uint16_t ou[] = {
        0x7E05, 0x543D, 0x6BC6, 0x93C2, 0x5076, 0x533A, 0x5340, 0x5418, 0x5455,
        0x5614, 0x5878, 0x6004, 0x616A, 0x6AD9, 0x6B27, 0x6B50, 0x6BB4, 0x6CA4,
        0x6F1A, 0x71B0, 0x74EF, 0x750C, 0x79BA, 0x8026, 0x8162, 0x8192, 0x8545,
        0x85D5, 0x85F2, 0x8B33, 0x8BB4, 0x9AC3, 0x9D0E, 0x9DD7, 0x9E25,
    };
    constexpr static const std::uint16_t ou1[] = {
        0x543D, 0x6BC6, 0x93C2, 0x533A, 0x5340, 0x5455, 0x5614, 0x5878, 0x6AD9,
        0x6B27, 0x6B50, 0x6BB4, 0x6CA4, 0x6F1A, 0x71B0, 0x74EF, 0x750C, 0x8192,
        0x85F2, 0x8B33, 0x8BB4, 0x9D0E, 0x9DD7, 0x9E25,
    };
    constexpr static const std::uint16_t ou3[] = {
        0x7E05, 0x5076, 0x5418, 0x5455, 0x5614, 0x5878, 0x6B27, 0x6B50, 0x750C,
        0x79BA, 0x8026, 0x8162, 0x8545, 0x85D5, 0x9AC3,
    };
    constexpr static const std::uint16_t ou4[] = {
        0x5455, 0x5614, 0x6004, 0x616A, 0x6CA4, 0x6F1A,
    };

    constexpr static const CandidateGroup none = {
        { section(a), section(a1), section(a2), section(a3), section(a4), section(a5) },
        { section(ai), section(ai1), section(ai2), section(ai3), section(ai4), section(ai5) },
        { section(an), section(an1), section(an2), section(an3), section(an4), { 0, 0 } },
        { section(ang), section(ang1), section(ang2), section(ang3), section(ang4), { 0, 0 } },
        { section(ao), section(ao1), section(ao2), section(ao3), section(ao4), section(ao5) },
        { section(e), section(e1), section(e2), section(e3), section(e4), section(e5) },
        { section(ei), section(ei1), section(ei2), section(ei3), section(ei4), { 0, 0 } },
        { section(en), section(en1), { 0, 0 }, section(en3), section(en4), { 0, 0 } },
        { section(eng), section(eng1), { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } },
        { section(er), section(er1), section(er2), section(er3), section(er4), section(er5) },
        { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } },
        { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } },
        { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } },
        { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } },
        { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } },
        { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } },
        { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } },
        { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } },
        { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } },
        { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } },
        { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } },
        { section(o), section(o1), section(o2), section(o3), section(o4), section(o5) },
        { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } },
        { section(ou), section(ou1), { 0, 0 }, section(ou3), section(ou4), { 0, 0 } },
        { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } },
        { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } },
        { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } },
        { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } },
        { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } },
        { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } },
        { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } },
        { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } },
        { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } },
        { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } },
        { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } }
    };

} // namespace zh