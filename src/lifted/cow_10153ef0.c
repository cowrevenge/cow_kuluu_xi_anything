/* f_0x10153ef0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10153ef0(Guest* g)
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->ebx = in_ebx & 0xffffff00u;
    g->edx = in_edx;
    t1 = rd32(COW_IMG(0x10662dccu));
    g->esp = sp0 - 0x10u;
    t2 = cow_thiscall(g, COW_IMG(0x101c4af0u), t1, 1, arg2);
    t3 = g->ecx;
    t4 = g->edx;
    if ((int32_t)t2 < 0)
    {
        eax = t2;
        goto L_10153f73;
    }
    eax = t2;
    ecx = t3;
    edx = t4;
    edi = t2;
    g->eax = eax;
    g->esp = sp0 - 8u;
    t5 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, edi, in_edi, in_esi);
    t6 = g->edx;
    g->ebx = in_ebx & 0xffffff00u;
    g->edx = t6;
    t7 = rd32(COW_IMG(0x10662dccu));
    g->esp = sp0 - 0x10u;
    t8 = cow_thiscall(g, COW_IMG(0x101c4740u), t7, 4, arg2, t5, edi, 0u);
    t9 = g->ecx;
    t10 = g->edx;
    if ((int32_t)t8 < 0)
    {
        eax = t8;
        goto L_10153f73;
    }
    eax = t8;
    ecx = t9;
    edx = t10;
    ebp = t5;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t11 = cow_stdcall(g, COW_IMG(0x10257850u), 0);
    t12 = g->edx;
    eax = t11;
    ecx = ebp;
    edx = t12;
    esi = t11;
L_10153f34: ;
    if (rd8(ecx) != rd8(esi))
    {
        eax = (eax & 0xffffff00u) | rd8(ecx);
        edx = (edx & 0xffffff00u) | rd8(ecx);
        cf = rd8(ecx) < rd8(esi);
        goto L_10153f58;
    }
    eax = (eax & 0xffffff00u) | rd8(ecx);
    edx = (edx & 0xffffff00u) | rd8(ecx);
    if ((uint8_t)eax == 0u) goto L_10153f54;
    if (rd8(ecx + 1u) != rd8(esi + 1u))
    {
        eax = (eax & 0xffffff00u) | rd8(ecx + 1u);
        edx = (edx & 0xffffff00u) | rd8(ecx + 1u);
        cf = rd8(ecx + 1u) < rd8(esi + 1u);
        goto L_10153f58;
    }
    eax = (eax & 0xffffff00u) | rd8(ecx + 1u);
    edx = (edx & 0xffffff00u) | rd8(ecx + 1u);
    if ((uint8_t)eax != 0u)
    {
        ecx = ecx + 2u;
        esi = esi + 2u;
        goto L_10153f34;
    }
L_10153f54: ;
    eax = 0u;
L_10153f5d: ;
    if (eax != 0u) goto L_10153f73;
    g->ebx = in_ebx & 0xffffff00u;
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t13 = cow_fastcall(g, COW_IMG(0x102579a0u), arg1, edx, 2, ebp, edi);
    g->ebx = in_ebx;
    return (t13 & 0xffffff00u) | 1u;
L_10153f58: ;
    eax = -cf + 1u - cf;
    goto L_10153f5d;
L_10153f73: ;
    g->ebx = in_ebx;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10153ef0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10153ef0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
