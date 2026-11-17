/* f_0x1030bdaf - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_1030bdaf(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t loc_c;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 56u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, self);
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, 4u);
    wr32(sp0 - 0x14u, 0x13u);
    t1 = rd32(rd32(sp0 + 0x14u) + 0x28u);
    wr32(sp0 - 0x18u, t1);
    g->edx = in_edx;
    t2 = rd32(sp0 + 0x14u);
    g->esp = sp0 - 0xcu;
    t3 = cow_thiscall_cdecl(g, rd32(t2 + 0x20u), self, 3, t1, 0x13u, 4u);
    t4 = g->ecx;
    t5 = g->edx;
    wr32(sp0 + 0x14u, t3);
    if (t3 != 0u)
    {
        eax = t3;
        ecx = t4;
        edx = t5;
        esi = t2;
        wr32(sp0 - 0x10u, in_ebx);
        wr32(sp0 - 0x14u, eax);
        wr32(sp0 - 0x18u, sp0 - 8u);
        wr32(sp0 - 0x1cu, arg4);
        wr32(sp0 - 0x20u, arg3);
        wr32(sp0 - 0x24u, 0u);
        wr32(sp0 - 0x28u, 0u);
        wr32(sp0 - 0x2cu, 0x13u);
        wr32(sp0 - 0x30u, 0x13u);
        wr32(sp0 - 0x34u, arg1);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t6 = cow_call_regs(g, COW_IMG(0x1030ba2au), arg2, g->ecx, g->edx, 1, 9, arg1, 0x13u, 0x13u, 0u, 0u, arg3, arg4, sp0 - 8u, eax);
        t7 = g->ecx;
        t8 = g->edx;
        if (t6 != 0xfffffffdu)
        {
            eax = t6;
            ecx = t7;
            edx = t8;
            ebx = t6;
            if (ebx == 0xfffffffbu) goto L_1030be13;
            if (rd32(arg2) != 0u)
            {
                eax = arg2;
                goto L_1030be1d;
            }
            eax = arg2;
L_1030be13: ;
            wr32(sp0 - 0x14u, 0xfffffffdu);
            wr32(esi + 0x18u, COW_IMG(0x103498d0u));
            ebx = 0xfffffffdu;
        }
        else
        {
            eax = t6;
            ecx = t7;
            edx = t8;
            ebx = t6;
            wr32(esi + 0x18u, COW_IMG(0x103498f4u));
        }
L_1030be1d: ;
        t9 = rd32(sp0 + 0x14u);
        wr32(sp0 - 0x14u, t9);
        t10 = rd32(esi + 0x28u);
        wr32(sp0 - 0x18u, t10);
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        cow_thiscall_cdecl(g, rd32(esi + 0x24u), ecx, 2, t10, t9);
        t11 = g->edx;
        eax = ebx;
        edx = t11;
        ebx = rd32(sp0 - 0x10u);
        loc_4 = rd32(sp0 - 4u);
        loc_c = rd32(sp0 - 0xcu);
    }
    else
    {
        edx = t5;
        wr32(sp0 - 0x10u, 0xfffffffcu);
        eax = 0xfffffffcu;
        ebx = in_ebx;
        loc_4 = in_ebp;
        loc_c = in_esi;
    }
    g->ebx = ebx;
    g->esi = loc_c;
    g->ebp = loc_4;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1030bdaf(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1030bdaf(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
