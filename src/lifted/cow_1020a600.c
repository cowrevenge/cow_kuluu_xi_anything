/* f_0x1020a600 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1020a600(Guest* g)
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

    g->edx = in_edx;
    cow_thiscall_cdecl(g, COW_IMG(0x10103f20u), self, 3, self + 0x5cu, in_edi, in_esi);
    t1 = g->ecx;
    t2 = g->edx;
    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        goto L_1020a670;
    }
    eax = rd32(COW_IMG(0x104dfd98u));
    ecx = t1;
    edx = t2;
    t3 = rd32(eax + 0x3c350u);
    g->edx = edx;
    g->esp = sp0 - 8u;
    t4 = cow_call_regs(g, COW_IMG(0x1020a680u), t3, g->ecx, g->edx, 1, 1, t3);
    t5 = g->edx;
    t6 = (t5 & 0xffff0000u) | rd16(rd32(COW_IMG(0x104dfd98u)) + 0x3c350u);
    g->ecx = rd32(COW_IMG(0x104dfd98u));
    g->edx = t6;
    t7 = rd32(COW_IMG(0x104dfd98u));
    g->esp = sp0 - 0xcu;
    t8 = cow_cdecl(g, COW_IMG(0x101070f0u), 1, t6);
    t9 = g->ecx;
    t10 = g->edx;
    if ((t8 & 2u) == 0u)
    {
        ecx = t9;
        edx = t10;
        goto L_1020a65a;
    }
    eax = t8;
    ecx = t9;
    edx = t10;
    edi = t4;
    if ((uint8_t)arg1 == 0u) goto L_1020a65a;
    eax = (eax & 0xffffff00u) | (uint8_t)arg1;
    if ((int32_t)edi < 0) goto L_1020a65a;
    g->edi = edi;
    g->eax = eax;
    g->esp = sp0 - 8u;
    t11 = cow_cdecl(g, COW_IMG(0x1020a6e0u), 2, self + 0x5cu, edi);
    g->edi = in_edi;
    return t11;
L_1020a65a: ;
    t12 = (ecx & 0xffff0000u) | rd16(rd32(COW_IMG(0x104dfd98u)) + 0x3c350u);
    t13 = rd32(COW_IMG(0x104dfd98u));
    g->esp = sp0 - 8u;
    t14 = cow_cdecl(g, COW_IMG(0x10107b00u), 2, self + 0x5cu, t12);
    eax = t14;
L_1020a670: ;
    g->edi = in_edi;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1020a600(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1020a600(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
