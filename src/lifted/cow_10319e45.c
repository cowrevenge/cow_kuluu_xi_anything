/* f_0x10319e45 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10319e45(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 20u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, in_ebx);
    if ((int32_t)rd32(sp0 + 4u) < 1) goto L_10319e9c;
    ebx = rd32(sp0 + 4u);
    if ((int32_t)ebx > 31) goto L_10319e9c;
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, 0xcu);
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x1031d016u), g->eax, self, in_edx, 1, 3, 0xcu, in_esi, in_ebx);
    t1 = g->edx;
    wr8(sp0 + 6u, 0u);
    wr32(sp0 - 0x10u, sp0 + 4u);
    wr8(sp0 + 4u, (uint8_t)((uint8_t)ebx + 0x40u));
    wr8(sp0 + 5u, 0x3au);
    g->eax = sp0 + 4u;
    g->edx = t1;
    g->esp = sp0 - 0xcu;
    t2 = cow_thiscall(g, rd32(COW_IMG(0x103290d0u)), 0xcu, 1, sp0 + 4u);
    t3 = g->ecx;
    t4 = g->edx;
    if (t2 == 0u)
    {
        eax = t2;
        ecx = t3;
        edx = t4;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t5 = cow_thiscall(g, rd32(COW_IMG(0x10329168u)), ecx, 0);
        t6 = g->ecx;
        t7 = g->edx;
        wr32(sp0 - 0x10u, t5);
        g->edx = t7;
        t8 = cow_cdecl(g, COW_IMG(0x10319c16u), 1, t5);
        t9 = g->edx;
        eax = t8;
        ecx = rd32(sp0 - 0x10u);
        edx = t9;
        esi = 0xffffffffu;
    }
    else
    {
        eax = t2;
        ecx = t3;
        edx = t4;
        esi = 0u;
    }
    wr32(sp0 - 0x10u, 0xcu);
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x1031d077u), g->eax, ecx, edx, 1, 3, 0xcu, rd32(sp0 - 0xcu), rd32(sp0 - 8u));
    t10 = g->edx;
    eax = esi;
    edx = t10;
    esi = rd32(sp0 - 0xcu);
L_10319eb5: ;
    g->ebx = rd32(sp0 - 8u);
    g->esi = esi;
    g->ebp = rd32(sp0 - 4u);
    g->edx = edx;
    return eax;
L_10319e9c: ;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t11 = cow_stdcall(g, COW_IMG(0x10319c89u), 0);
    t12 = g->ecx;
    t13 = g->edx;
    wr32(t11, 0xdu);
    g->edx = t13;
    t14 = cow_stdcall(g, COW_IMG(0x10319c92u), 0);
    t15 = g->edx;
    wr32(t14, 0xfu);
    eax = 0xffffffffu;
    edx = t15;
    esi = in_esi;
    goto L_10319eb5;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10319e45(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10319e45(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
