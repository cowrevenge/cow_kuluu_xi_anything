/* f_0x10073d80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_10073d80(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 24u);

    if (rd32(COW_IMG(0x1047d124u)) == 0u)
    {
        eax = 0u;
    }
    else
    {
        eax = rd32(COW_IMG(0x1047d124u));
        eax = rd32(eax);
    }
    wr32(sp0 - 4u, in_edi);
    if (eax == 0u) goto L_10073dbe;
L_10073d98: ;
    if ((rd32(eax + 0x24u) & 0x7fu) == 2u) goto L_10073da8;
    ecx = rd32(eax + 0x24u) & 0x7fu;
    if (ecx != 1u) goto L_10073dad;
L_10073da8: ;
    if (rd32(eax + 0x34u) == arg2) goto L_10073e1a;
L_10073dad: ;
    if (rd32(eax + 0x2cu) == 0u)
    {
        eax = 0u;
    }
    else
    {
        eax = rd32(eax + 0x2cu);
        eax = rd32(eax);
    }
    if (eax != 0u) goto L_10073d98;
L_10073dbe: ;
    if ((uint8_t)arg3 == 0u)
    {
        esi = in_esi;
    }
    else
    {
        wr32(sp0 - 8u, 0x4d727400u);
        wr32(sp0 - 0xcu, arg2);
        g->edx = in_edx;
        t2 = rd32(COW_IMG(0x1047d140u));
        g->esp = sp0 - 4u;
        t3 = cow_thiscall(g, COW_IMG(0x10074f30u), t2, 2, arg2, 0x4d727400u);
        t4 = g->ecx;
        t5 = g->edx;
        if (t3 != 0u)
        {
            esi = in_esi;
        }
        else
        {
            eax = t3;
            ecx = t4;
            edx = t5;
            wr32(sp0 - 8u, in_esi);
            wr32(sp0 - 0xcu, eax);
            wr32(sp0 - 0x10u, 4u);
            wr32(sp0 - 0x14u, 0x49u);
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t6 = cow_cdecl(g, COW_IMG(0x10028fd0u), 2, 0x49u, 4u);
            t7 = g->edx;
            g->esp = sp0 - 8u;
            t8 = cow_fastcall(g, COW_IMG(0x100748f0u), t6, t7, 0);
            t9 = g->edx;
            wr8(COW_IMG(0x1047d13cu), 1u);
            if (t6 == 0u)
            {
                eax = t8;
                edx = t9;
                esi = 0u;
            }
            else
            {
                eax = t8;
                edx = t9;
                esi = t6;
                g->esp = sp0 - 8u;
                t10 = cow_call_regs(g, COW_IMG(0x10074740u), eax, esi, edx, 1, 0);
                t11 = g->edx;
                wr32(esi, COW_IMG(0x1032c908u));
                wr32(esi + 0x38u, 0u);
                wr32(esi + 0x45u, 0u);
                eax = t10;
                edx = t11;
            }
            g->eax = eax;
            g->esp = sp0 - 8u;
            t12 = cow_thiscall(g, COW_IMG(0x10074a00u), esi, 0);
            wr32(sp0 - 0xcu, arg2);
            wr32(sp0 - 0x10u, sp0 + 0xcu);
            cow_thiscall(g, COW_IMG(0x10072c30u), esi, 2, sp0 + 0xcu, arg2);
            esi = rd32(sp0 - 8u);
        }
    }
    wr32(arg1, 0u);
    g->esi = esi;
    return arg1;
L_10073e1a: ;
    t1 = rd32(eax + 0x14u);
    wr32(arg1, t1);
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10073d80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10073d80(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
