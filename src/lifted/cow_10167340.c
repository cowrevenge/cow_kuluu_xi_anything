/* f_0x10167340 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10167340(Guest* g)
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
    const uint32_t in_edi = g->edi;

    g->esp = sp0 - 0x10u;
    t1 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, in_edx, 1, 1, 0x14u);
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
        goto L_101673c9;
    }
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
        goto L_101673c9;
    }
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
L_1016738c: ;
    if (rd8(ecx) != rd8(esi))
    {
        eax = (eax & 0xffffff00u) | rd8(ecx);
        edx = (edx & 0xffffff00u) | rd8(ecx);
        cf = rd8(ecx) < rd8(esi);
        goto L_101673b0;
    }
    eax = (eax & 0xffffff00u) | rd8(ecx);
    edx = (edx & 0xffffff00u) | rd8(ecx);
    if ((uint8_t)eax == 0u) goto L_101673ac;
    if (rd8(ecx + 1u) != rd8(esi + 1u))
    {
        eax = (eax & 0xffffff00u) | rd8(ecx + 1u);
        edx = (edx & 0xffffff00u) | rd8(ecx + 1u);
        cf = rd8(ecx + 1u) < rd8(esi + 1u);
        goto L_101673b0;
    }
    eax = (eax & 0xffffff00u) | rd8(ecx + 1u);
    edx = (edx & 0xffffff00u) | rd8(ecx + 1u);
    if ((uint8_t)eax != 0u)
    {
        ecx = ecx + 2u;
        esi = esi + 2u;
        goto L_1016738c;
    }
L_101673ac: ;
    eax = 0u;
L_101673b5: ;
    if (eax != 0u) goto L_101673c9;
    g->ebx = self;
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t15 = cow_fastcall(g, COW_IMG(0x102579a0u), self, edx, 2, ebp, edi);
    g->ebx = in_ebx;
    return (t15 & 0xffffff00u) | 1u;
L_101673b0: ;
    eax = -cf + 1u - cf;
    goto L_101673b5;
L_101673c9: ;
    g->ebx = in_ebx;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10167340(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10167340(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
