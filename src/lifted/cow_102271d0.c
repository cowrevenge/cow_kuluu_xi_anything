/* f_0x102271d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_102271d0(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebp;
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
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
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

    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_thiscall(g, COW_IMG(0x101c59b0u), self + 0x14u, 1, 0x4au);
    t2 = g->ecx;
    t3 = g->edx;
    t4 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, t3, 1, 1, 0x3au);
    t5 = g->edx;
    g->edx = t5;
    t6 = cow_thiscall(g, COW_IMG(0x101c5a30u), self + 0x14u, 1, t4);
    t7 = g->ecx;
    t8 = g->edx;
    t9 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, t8, 1, 1, 0x5cu);
    t10 = g->edx;
    g->edx = t10;
    t11 = rd32(COW_IMG(0x10662dccu));
    t12 = cow_thiscall(g, COW_IMG(0x101c4af0u), t11, 1, t9);
    t13 = g->ecx;
    t14 = g->edx;
    if ((int32_t)t12 < 0)
    {
        eax = t12;
    }
    else
    {
        eax = t12;
        ecx = t13;
        edx = t14;
        ebp = t12;
        esi = t9;
        g->eax = eax;
        g->esp = sp0 - 8u;
        t15 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, ebp, in_edi, in_esi);
        t16 = g->edx;
        wr32(self + 0x10u, t15);
        g->edx = t16;
        t17 = rd32(COW_IMG(0x10662dccu));
        g->esp = sp0 - 0x10u;
        t18 = cow_thiscall(g, COW_IMG(0x101c4740u), t17, 4, esi, t15, ebp, 0u);
        t19 = g->ecx;
        t20 = g->edx;
        if ((int32_t)t18 < 0)
        {
            eax = t18;
        }
        else
        {
            eax = t18;
            ecx = t19;
            edx = t20;
            g->eax = eax;
            g->edx = edx;
            t21 = rd32(self + 0x10u);
            g->esp = sp0 - 0x10u;
            t22 = cow_stdcall(g, COW_IMG(0x10257850u), 0);
            t23 = g->edx;
            eax = t22;
            ecx = t21;
            edx = t23;
            ebx = t21;
            esi = t22;
L_1022723e: ;
            if (rd8(ecx) != rd8(esi))
            {
                eax = (eax & 0xffffff00u) | rd8(ecx);
                edx = (edx & 0xffffff00u) | rd8(ecx);
                cf = rd8(ecx) < rd8(esi);
                goto L_10227262;
            }
            eax = (eax & 0xffffff00u) | rd8(ecx);
            edx = (edx & 0xffffff00u) | rd8(ecx);
            if ((uint8_t)eax == 0u) goto L_1022725e;
            if (rd8(ecx + 1u) != rd8(esi + 1u))
            {
                eax = (eax & 0xffffff00u) | rd8(ecx + 1u);
                edx = (edx & 0xffffff00u) | rd8(ecx + 1u);
                cf = rd8(ecx + 1u) < rd8(esi + 1u);
                goto L_10227262;
            }
            eax = (eax & 0xffffff00u) | rd8(ecx + 1u);
            edx = (edx & 0xffffff00u) | rd8(ecx + 1u);
            if ((uint8_t)eax != 0u)
            {
                ecx = ecx + 2u;
                esi = esi + 2u;
                goto L_1022723e;
            }
L_1022725e: ;
            eax = 0u;
L_10227267: ;
            if (eax == 0u)
            {
                g->ebx = ebx;
                g->eax = eax;
                g->esp = sp0 - 0x10u;
                t24 = cow_fastcall(g, COW_IMG(0x102579d0u), self, edx, 2, ebx, ebp);
                eax = t24;
            }
        }
    }
    g->ebx = in_ebx;
    return eax;
L_10227262: ;
    eax = -cf + 1u - cf;
    goto L_10227267;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102271d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102271d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
