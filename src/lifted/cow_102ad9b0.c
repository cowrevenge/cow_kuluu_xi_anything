/* f_0x102ad9b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_102ad9b0(Guest* g)
{
    uint32_t eax;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(arg1 + 0x4cu) == 0u)
    {
        if ((int32_t)rd32(arg1 + 0x44u) <= 0)
        {
            ecx = self;
            edx = in_edx;
            esi = 0u;
        }
        else
        {
            eax = rd32(arg1 + 0x44u);
            ecx = rd32(arg1 + 0x48u);
            edx = eax;
            esi = 0u;
L_102ad9cf: ;
            if ((int32_t)rd32(ecx) > (int32_t)esi)
            {
                eax = rd32(ecx);
                esi = eax;
            }
            if (edx != 1u)
            {
                ecx = ecx + 4u;
                edx = edx - 1u;
                goto L_102ad9cf;
            }
            ecx = ecx + 4u;
            edx = edx - 1u;
        }
        if (rd32(arg1 + 0x50u) != 0u)
        {
            eax = rd32(arg1 + 0x50u);
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 8u;
            cow_cdecl(g, COW_IMG(0x10276110u), 3, eax, COW_IMG(0x103bef68u), 0x1ddu);
            t1 = g->ecx;
            t2 = g->edx;
            ecx = t1;
            edx = t2;
        }
        g->ecx = ecx;
        g->esp = sp0 - 4u;
        t3 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, esi, 4u, COW_IMG(0x103bef68u), 0x1dfu, in_esi);
        t4 = g->ecx;
        wr32(arg1 + 0x50u, t3);
        if ((int32_t)esi <= 0)
        {
            eax = 0u;
            ecx = t4;
            goto L_102ada20;
        }
        eax = 0u;
L_102ada15: ;
        t5 = rd32(arg1 + 0x50u);
        wr32(eax * 4u + t5, eax);
        if ((int32_t)(eax + 1u) < (int32_t)esi)
        {
            eax = eax + 1u;
            goto L_102ada15;
        }
        eax = eax + 1u;
        ecx = t5;
L_102ada20: ;
        t6 = rd32(arg1 + 0x34u);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = t6;
        g->esp = sp0;
        t7 = cow_cdecl(g, COW_IMG(0x102a9f10u), 3, t6, in_esi, in_edi);
        t8 = g->ecx;
        t9 = g->edx;
        g->ecx = t8;
        g->edx = t9;
        g->esp = sp0 - 4u;
        cow_cdecl(g, COW_IMG(0x102ad1f0u), 3, arg1, t6, in_esi);
        t10 = g->ecx;
        t11 = g->edx;
        t12 = rd32(arg1 + 0x34u);
        g->eax = t12;
        g->ecx = t10;
        g->edx = t11;
        g->esp = sp0 - 8u;
        t13 = cow_cdecl(g, COW_IMG(0x102a9f50u), 3, t12, arg1, t6);
        t14 = g->ecx;
        t15 = g->edx;
        g->esp = sp0 - 0x14u;
        cow_cdecl(g, COW_IMG(0x102ad790u), 1, arg1);
        wr32(arg1 + 0x30u, COW_IMG(0x102b3360u));
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102ad9b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102ad9b0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
