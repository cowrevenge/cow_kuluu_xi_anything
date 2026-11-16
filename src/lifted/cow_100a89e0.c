/* f_0x100a89e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100a89e0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->esp = sp0 - 0xcu;
    t1 = cow_call_regs(g, COW_IMG(0x10081cf0u), in_eax, self, in_edx, 1, 0);
    t2 = g->edx;
    wr32(self, COW_IMG(0x1032e3c8u));
    g->edx = t2;
    cow_thiscall(g, COW_IMG(0x100814a0u), self + 0x5a0u, 0);
    t3 = g->ecx;
    t4 = g->edx;
    wr32(self, COW_IMG(0x1032dfc8u));
    wr32(self + 0xf4u, 0u);
    wr32(self + 0xe0u, 0x3f800000u);
    wr8(self + 0xf8u, 0u);
    wr8(self + 0xf9u, 1u);
    wr8(self + 0xfbu, 0u);
    wr8(self + 0x103u, 0u);
    wr8(self + 0x104u, 0u);
    wr8(self + 0x102u, 0u);
    wr32(self + 0xfcu, 0u);
    wr8(self + 0x100u, 0u);
    wr32(self + 0x594u, 0u);
    wr32(self + 0x598u, 0u);
    wr32(self + 0x174u, 0u);
    wr32(self + 0x178u, 0u);
    wr8(self + 0x17cu, 0u);
    wr32(self + 0x160u, 0u);
    wr32(self + 0x164u, 0xbf800000u);
    wr32(self + 0x168u, 0u);
    wr32(self + 0x16cu, 0x3f800000u);
    if (rd32(COW_IMG(0x1057876cu)) == 0u)
    {
        eax = 0x3f800000u;
        edx = t4;
    }
    else
    {
        ecx = t3;
        edx = t4;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        cow_cdecl(g, COW_IMG(0x10159400u), 2, 3u, COW_IMG(0x100a8c20u));
        t5 = g->ecx;
        t6 = g->edx;
        g->edx = t6;
        g->esp = sp0 - 0x14u;
        cow_cdecl(g, COW_IMG(0x10159400u), 2, 2u, COW_IMG(0x100a8c40u));
        t7 = g->edx;
        if (rd8(rd32(COW_IMG(0x1057876cu)) + 0x50u) != 1u)
        {
            eax = rd32(COW_IMG(0x1057876cu));
            edx = t7;
            wr8(self + 0xfau, 0u);
        }
        else
        {
            eax = rd32(COW_IMG(0x1057876cu));
            edx = t7;
            wr8(self + 0xfau, 1u);
        }
    }
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x100814f0u), self + 0x5a0u, 1, 0u);
    wr16(self + 0x5acu, 0u);
    wr16(self + 0x5aeu, 0u);
    wr8(self + 0x5b0u, 0u);
    wr32(self + 0x108u, 0u);
    wr32(self + 0x10cu, 0u);
    wr32(self + 0x110u, 0u);
    wr32(self + 0x114u, 0u);
    wr32(self + 0x130u, rd32(COW_IMG(0x1035bc0cu)));
    wr32(self + 0x134u, rd32(COW_IMG(0x1035bc10u)));
    wr32(self + 0x138u, rd32(COW_IMG(0x1035bc14u)));
    wr32(self + 0x13cu, rd32(COW_IMG(0x1035bc18u)));
    wr32(self + 0x140u, 0x3e000000u);
    wr32(self + 0x148u, 0u);
    wr32(self + 0x144u, 0u);
    wr32(self + 0x150u, rd32(COW_IMG(0x1035bc1cu)));
    wr32(self + 0x154u, rd32(COW_IMG(0x1035bc20u)));
    wr32(self + 0x158u, rd32(COW_IMG(0x1035bc24u)));
    wr32(self + 0x15cu, rd32(COW_IMG(0x1035bc28u)));
    wr32(self + 0x14cu, 0u);
    wr8(self + 0x101u, 0u);
    wr32(self + 0x118u, 0u);
    wr32(self + 0x11cu, 0u);
    wr32(self + 0x120u, rd32(COW_IMG(0x1035bc2cu)));
    wr32(self + 0x124u, rd32(COW_IMG(0x1035bc30u)));
    wr32(self + 0x128u, rd32(COW_IMG(0x1035bc34u)));
    t8 = rd32(COW_IMG(0x1035bc38u));
    wr8(self + 0x5b1u, 0u);
    wr32(self + 0x12cu, t8);
    edx = self + 0x388u;
    ebx = 5u;
L_100a8bbd: ;
    edi = edx - 0x208u;
    eax = 0u;
    ecx = 0x1au;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    edi = edx;
    ecx = 0x1au;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    if (ebx != 1u)
    {
        edx = edx + 0x68u;
        ebx = ebx - 1u;
        goto L_100a8bbd;
    }
    edx = edx + 0x68u;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t9 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
    t10 = g->edx;
    if (t9 != self)
    {
        edx = t10;
    }
    else
    {
        eax = t9;
        edx = t10;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        cow_thiscall(g, COW_IMG(0x100a5770u), COW_IMG(0x10487f1cu), 1, self + 0xd4u);
        t11 = g->edx;
        edx = t11;
    }
    g->edx = edx;
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a89e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100a89e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
