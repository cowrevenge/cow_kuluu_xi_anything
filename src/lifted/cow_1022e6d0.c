/* f_0x1022e6d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1022e6d0(Guest* g)
{
    double d17;
    double d18;
    double d19;
    double d20;
    uint32_t eax;
    uint32_t ebp;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_40;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t2;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
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
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 88u);

    wr32(sp0 - 4u, in_esi);
    if (rd32(self + 0x64u) == 0u) goto L_1022e6f6;
    eax = rd32(self + 0x64u);
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_1022e6e7;
    }
    eax = eax - 1u;
    if (eax != 1u)
    {
        eax = eax - 1u;
        edx = in_edx;
        goto L_1022e707;
    }
    wr32(sp0 - 0x2cu, in_ebx);
    wr32(sp0 - 0x30u, in_ebp);
    wr32(sp0 - 0x34u, in_esi);
    t1 = rd32(self + 0x30u);
    wr32(sp0 - 0x38u, t1);
    g->edx = in_edx;
    g->esp = sp0 - 0x34u;
    t2 = cow_thiscall(g, COW_IMG(0x1022df70u), self, 1, t1);
    t3 = g->edx;
    if (t2 == 0xfffffffau)
    {
        eax = t2;
        edx = t3;
        edi = in_edi;
    }
    else
    {
        ebp = t2;
        wr32(sp0 - 0x38u, ebp);
        g->eax = rd32(self + 0x6cu);
        g->edx = rd32(self + 0x6cu) * 0x25u;
        t4 = rd32(self + 0x6cu);
        g->esp = sp0 - 0x34u;
        t5 = cow_thiscall(g, COW_IMG(0x1022f140u), COW_IMG(0x10667a90u) + t4 * 0x94u, 1, ebp);
        t6 = g->edx;
        if (t5 == 0u)
        {
            eax = t5;
            edx = t6;
            edi = in_edi;
        }
        else
        {
            eax = t5;
            edx = t6;
            esi = t5;
            wr32(sp0 - 0x38u, in_edi);
            if (rd8(esi) != 0x5fu)
            {
                edi = 0u;
                goto L_1022df0a;
            }
            eax = (eax & 0xffffff00u) | rd8(esi);
            edi = 0u;
L_1022df01: ;
            if (rd8(edi + esi + 1u) == 0x5fu)
            {
                eax = (eax & 0xffffff00u) | rd8(edi + esi + 1u);
                edi = edi + 1u;
                goto L_1022df01;
            }
            edi = edi + 1u;
L_1022df0a: ;
            wr32(sp0 - 0x3cu, 0u);
            wr32(sp0 - 0x40u, 0x10u);
            wr32(sp0 - 0x44u, 0x32u);
            wr32(sp0 - 0x48u, 0x28u);
            wr32(sp0 - 0x4cu, 0x14u);
            wr32(sp0 - 0x50u, 0x20u);
            t7 = rd32(self + 8u) + 0xc4u;
            wr32(sp0 - 0x54u, t7);
            g->esp = sp0 - 0x38u;
            cow_thiscall(g, COW_IMG(0x10233130u), sp0 - 0x28u, 7, t7, 0x20u, 0x14u, 0x28u, 0x32u, 0x10u, 0u);
            wr32(sp0 - 0x3cu, ebp);
            g->edx = rd32(self + 0x6cu) * 0x25u;
            t8 = rd32(self + 0x6cu);
            t9 = cow_thiscall(g, COW_IMG(0x1022f150u), COW_IMG(0x10667a90u) + t8 * 0x94u, 1, ebp);
            t10 = g->edx;
            wr32(sp0 - 0x3cu, 0u);
            if (t9 != 0u)
            {
                eax = t9;
                edx = t10;
                edi = edi + esi;
                wr32(sp0 - 0x40u, eax);
                loc_40 = eax;
            }
            else
            {
                eax = t9;
                edx = t10;
                edi = edi + esi;
                wr32(sp0 - 0x40u, COW_IMG(0x103d3c84u));
                loc_40 = COW_IMG(0x103d3c84u);
            }
            wr32(sp0 - 0x44u, edi);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x38u;
            t11 = cow_thiscall(g, COW_IMG(0x10233190u), sp0 - 0x28u, 3, edi, loc_40, 0u);
            t12 = g->edx;
            t13 = cow_fastcall(g, COW_IMG(0x10233120u), sp0 - 0x28u, t12, 0);
            t14 = g->edx;
            eax = t13;
            edx = t14;
            edi = rd32(sp0 - 0x38u);
        }
    }
    g->ebx = rd32(sp0 - 0x2cu);
    g->esi = rd32(sp0 - 0x34u);
    g->edi = edi;
    g->ebp = rd32(sp0 - 0x30u);
    g->edx = edx;
    return eax;
L_1022e6e7: ;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t15 = cow_thiscall(g, COW_IMG(0x1022de70u), self, 0);
    t16 = g->edx;
    d17 = cow_take_float(g);
    d18 = cow_take_float(g);
    d19 = cow_take_float(g);
    d20 = cow_take_float(g);
    g->esp = sp0;
    g->edx = t16;
    fpush(g, d17);
    fpush(g, d18);
    fpush(g, d19);
    fpush(g, d20);
    return cow_tailcall(g, COW_IMG(0x10221f50u), t15, self, t16);
L_1022e6f6: ;
    t21 = rd32(self + 8u) + 0xc4u;
    wr32(sp0 - 8u, t21);
    g->eax = t21;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t22 = cow_stdcall(g, COW_IMG(0x1022f5c0u), 0);
    t23 = g->edx;
    eax = t22;
    edx = t23;
L_1022e707: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1022e6d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1022e6d0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
