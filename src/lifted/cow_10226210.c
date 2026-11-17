/* f_0x10226210 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10226210(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
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

    g->esp = sp0 - 0x10u;
    t1 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, in_edx, 1, 1, 0x61u);
    t2 = g->edx;
    g->ebx = self;
    g->edx = t2;
    t3 = rd32(COW_IMG(0x10662dccu));
    t4 = cow_thiscall(g, COW_IMG(0x101c4af0u), t3, 1, t1);
    t5 = g->ecx;
    t6 = g->edx;
    if ((int32_t)t4 < 0)
    {
        eax = t4;
    }
    else
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        esi = t1;
        edi = t4;
        g->eax = eax;
        g->esp = sp0 - 8u;
        t7 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, edi, in_edi, in_esi);
        t8 = g->edx;
        g->ebx = self;
        g->edx = t8;
        t9 = rd32(COW_IMG(0x10662dccu));
        g->esp = sp0 - 0x10u;
        t10 = cow_thiscall(g, COW_IMG(0x101c4740u), t9, 4, esi, t7, edi, 0u);
        t11 = g->ecx;
        t12 = g->edx;
        if ((int32_t)t10 < 0)
        {
            eax = t10;
        }
        else
        {
            eax = t10;
            ecx = t11;
            edx = t12;
            ebp = t7;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t13 = cow_stdcall(g, COW_IMG(0x10257850u), 0);
            t14 = g->edx;
            eax = t13;
            ecx = ebp;
            edx = t14;
            esi = t13;
L_1022625c: ;
            if (rd8(ecx) != rd8(esi))
            {
                eax = (eax & 0xffffff00u) | rd8(ecx);
                edx = (edx & 0xffffff00u) | rd8(ecx);
                cf = rd8(ecx) < rd8(esi);
                goto L_10226280;
            }
            eax = (eax & 0xffffff00u) | rd8(ecx);
            edx = (edx & 0xffffff00u) | rd8(ecx);
            if ((uint8_t)eax == 0u) goto L_1022627c;
            if (rd8(ecx + 1u) != rd8(esi + 1u))
            {
                eax = (eax & 0xffffff00u) | rd8(ecx + 1u);
                edx = (edx & 0xffffff00u) | rd8(ecx + 1u);
                cf = rd8(ecx + 1u) < rd8(esi + 1u);
                goto L_10226280;
            }
            eax = (eax & 0xffffff00u) | rd8(ecx + 1u);
            edx = (edx & 0xffffff00u) | rd8(ecx + 1u);
            if ((uint8_t)eax != 0u)
            {
                ecx = ecx + 2u;
                esi = esi + 2u;
                goto L_1022625c;
            }
L_1022627c: ;
            eax = 0u;
L_10226285: ;
            if (eax == 0u)
            {
                g->ebx = self;
                g->eax = eax;
                g->esp = sp0 - 0x10u;
                t15 = cow_fastcall(g, COW_IMG(0x102579a0u), self, edx, 2, ebp, edi);
                t16 = g->ecx;
                t17 = g->edx;
                t18 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, t17, 1, 1, 0x62u);
                t19 = g->edx;
                t20 = cow_thiscall(g, COW_IMG(0x101c80c0u), self + 0x10u, 1, t18);
                eax = t20;
            }
        }
    }
    g->ebx = in_ebx;
    return eax;
L_10226280: ;
    eax = -cf + 1u - cf;
    goto L_10226285;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10226210(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10226210(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
