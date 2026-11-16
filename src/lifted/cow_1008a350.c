/* f_0x1008a350 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1008a350(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    wr32(self + 0xdcu, 0x64u);
    wr32(self + 0xe0u, 0x64u);
    wr32(self + 0x30u, 0x3f800000u);
    wr32(self + 0x10u, 0x3f800000u);
    wr32(self + 0x20u, 0x3f800000u);
    t1 = rd32(self + 0x120u) & 0xffffe07fu;
    wr32(self + 0x120u, t1);
    wr16(self + 0x11cu, 0u);
    wr32(self + 0x2cu, 0u);
    wr32(self + 0x28u, 0u);
    wr32(self + 0x24u, 0u);
    wr32(self + 0xcu, 0u);
    wr32(self + 8u, 0u);
    wr32(self + 4u, 0u);
    wr32(self + 0x1cu, 0u);
    wr32(self + 0x18u, 0u);
    wr32(self + 0x14u, 0u);
    wr32(self + 0x74u, 0u);
    wr32(self + 0x78u, 0u);
    wr8(self + 0x7cu, 0u);
    wr32(self + 0xa0u, 0u);
    edi = self + 0xa4u;
    eax = 0u;
    ecx = 0xcu;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t2 = rd32(self + 0x120u);
    wr32(self + 0xe8u, 0u);
    wr32(self + 0x120u, t2 & 0xffffffcfu);
    wr8(self + 0xeeu, 0u);
    wr8(self + 0xefu, 0u);
    wr16(self + 0x166u, 0u);
    wr32(self + 0x168u, 0x34756f6du);
    edi = self + 0xfcu;
    ecx = 8u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t3 = rd32(self + 0x140u);
    t4 = rd32(self + 0x120u);
    wr16(self + 0xf4u, 0u);
    wr8(self + 0xf6u, 0u);
    wr32(self + 0xd8u, 0u);
    wr32(self + 0x170u, 0u);
    wr32(self + 0x16cu, 0u);
    wr32(self + 0x178u, 0u);
    wr32(self + 0x17cu, 0u);
    wr32(self + 0x15cu, 0x40a00000u);
    wr32(self + 0x98u, 0x40a00000u);
    wr32(self + 0x9cu, 0x40a00000u);
    wr16(self + 0xf2u, 0u);
    wr16(self + 0xf0u, 0u);
    wr16(self + 0x1b8u, 0u);
    wr32(self + 0x188u, 0u);
    wr32(self + 0x184u, 0u);
    wr32(self + 0x180u, 0u);
    wr16(self + 0x164u, 0u);
    wr16(self + 0x162u, 0u);
    wr16(self + 0x160u, 0u);
    wr32(self + 0xe4u, 0u);
    wr8(self + 0x1bcu, 0u);
    wr8(self + 0x1bdu, 0u);
    wr32(self + 0x1d4u, 0u);
    wr16(self + 0x1d8u, 0x17u);
    wr32(self + 0x1d0u, 0u);
    wr16(self + 0x148u, 0u);
    wr16(self + 0x14eu, 0u);
    wr16(self + 0x150u, 0u);
    wr32(self + 0x120u, t4 & 0x1fb0u);
    wr8(self + 0x144u, 0u);
    wr32(self + 0x124u, 0x880u);
    wr32(self + 0x140u, t3 & 0xfffffff7u);
    t5 = rd32(self + 0x12cu) & 0x300002u;
    t6 = rd32(self + 0x130u);
    wr32(self + 0x12cu, t5);
    t7 = rd32(self + 0x13cu);
    wr32(self + 0x130u, t6 & 0xffff7f00u);
    t8 = (t7 & 0xf0040003u) | 0x40000u;
    wr32(self + 0x13cu, t8);
    wr16(self + 0x146u, 0u);
    wr16(self + 0x14au, 0u);
    wr16(self + 0x14cu, 0u);
    wr32(self + 0x1f0u, 0u);
    wr8(self + 0x1ffu, 0u);
    wr8(self + 0x200u, 0u);
    wr8(self + 0x201u, 0u);
    wr8(self + 0x1dau, 0u);
    wr8(self + 0x1dbu, 0u);
    wr32(self + 0x128u, 0x20001u);
    wr8(self + 0x145u, 0u);
    wr16(self + 0x1f8u, 0u);
    wr16(self + 0x2a6u, 0u);
    wr16(self + 0x1fau, 0u);
    wr16(self + 0x2a4u, 0u);
    wr8(self + 0x1feu, 0u);
    wr16(self + 0x1fcu, 0u);
    wr32(self + 0x204u, 0xbf800000u);
    wr32(self + 0x208u, 0u);
    wr32(self + 0x20cu, 0u);
    wr16(self + 0x210u, 0u);
    wr8(self + 0x212u, 0u);
    wr8(self + 0x213u, 0u);
    edi = self + 0x250u;
    eax = 0u;
    ecx = 0xbu;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t9 = rd32(self + 0x13cu) & 0x1fffffffu;
    t10 = rd32(self + 0x130u);
    t11 = rd32(self + 0x140u);
    wr32(self + 0x13cu, t9);
    wr32(self + 0x140u, t11 & 0xfffffff8u);
    wr32(self + 0x18cu, 0u);
    wr32(self + 0x130u, t10 & 0xfffc80ffu);
    edi = self + 0x27cu;
    eax = 0u;
    ecx = 9u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t12 = rd32(self + 0x134u);
    t13 = rd32(self + 0x130u);
    t14 = rd32(self + 0x13cu);
    wr8(self + 0x138u, 0u);
    t15 = rd32(self + 0x138u);
    wr32(self + 0x130u, t13 & 0x103ffffu);
    wr16(self + 0x2a0u, 0u);
    wr16(self + 0x2a2u, 0u);
    wr32(self + 0x134u, t12 & 0xfe000000u);
    wr16(self + 0x202u, 0u);
    wr32(self + 0x138u, (uint8_t)t15);
    wr32(self + 0x13cu, t14 & 0xfffffffcu);
    g->edx = t14 & 0xfffffffcu;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x1008a160u), self, 0);
    t16 = g->edx;
    if (arg1 != 0x1000000u)
    {
        edx = t16;
        g->eax = 0x1000000u;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t20 = cow_thiscall(g, COW_IMG(0x1008a1a0u), self, 0);
        t21 = g->edx;
        cow_fastcall(g, COW_IMG(0x1008d980u), self, t21, 0);
    }
    else
    {
        t17 = rd32(self + 0x1d0u);
        wr32(self + 0x78u, 0x1000000u);
        t18 = rd32(self + 0x120u);
        wr32(self + 0x74u, 0x900u);
        wr32(self + 0x1d0u, t17 | 2u);
        t19 = (t18 & 0xffff00ffu) | (uint8_t)(t18 >> 8u | 2u) << 8u;
        wr32(self + 0x120u, t19);
    }
    wr32(self + 0xd4u, 0u);
    wr32(self + 0xf8u, 0u);
    wr16(self + 0x1c0u, 0xffffu);
    wr32(self + 0x1c4u, 0u);
    wr32(self + 0x1c8u, 0u);
    wr32(self + 0x1ccu, 0u);
    wr32(self + 0x1ecu, 0u);
    wr32(self + 0x1f4u, 0u);
    wr32(self + 0x1dcu, 0u);
    wr16(self + 0x1e0u, 0u);
    wr16(self + 0x1e2u, 0u);
    wr32(self + 0x1e4u, 0u);
    wr16(self + 0x1e8u, 0u);
    wr16(self + 0x1eau, 0u);
    wr32(self + 0x2a8u, 0u);
    edi = self + 0x214u;
    eax = 0u;
    ecx = 8u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u);
    edi = self + 0x235u;
    eax = 0u;
    ecx = 6u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u);
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1008a350(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1008a350(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
