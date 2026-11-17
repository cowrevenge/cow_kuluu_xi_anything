/* f_0x1008a7d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1008a7d0(Guest* g)
{
    uint32_t eax;
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
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint16_t)arg2 < 0x3e8u) goto L_1008a7fd;
    if ((uint16_t)arg2 > 0x513u) goto L_1008a7fd;
    g->eax = in_eax;
    g->esp = sp0 - 8u;
    t1 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, in_edx, 1, 1, 0x6du);
    t2 = g->edx;
    eax = t1;
    edx = t2;
    esi = t1 + (uint16_t)arg2 - 0x3e8u;
L_1008a835: ;
    g->eax = eax;
    g->edx = edx;
    t7 = rd32(COW_IMG(0x10662dccu));
    g->esp = sp0 - 8u;
    t8 = cow_thiscall(g, COW_IMG(0x101c4af0u), t7, 1, esi);
    t9 = g->ecx;
    t10 = g->edx;
    if (t8 != 0xffffffffu)
    {
        ecx = t9;
        edx = t10;
        edi = t8;
        goto L_1008a84d;
    }
    return 0u;
L_1008a7fd: ;
    if ((uint16_t)arg1 < 0x100u)
    {
        g->eax = in_eax;
        g->esp = sp0 - 8u;
        t5 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, in_edx, 1, 1, 0x6bu);
        t6 = g->edx;
        eax = t5;
        edx = t6;
        esi = t5 + (uint16_t)arg1;
    }
    else
    {
        g->eax = in_eax;
        g->esp = sp0 - 8u;
        t3 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, in_edx, 1, 1, 0x6eu);
        t4 = g->edx;
        eax = t3;
        edx = t4;
        esi = t3 + (uint16_t)arg1 - 0x100u;
    }
    goto L_1008a835;
L_1008a84d: ;
    g->eax = edi + 0x5dcu;
    g->esp = sp0 - 4u;
    t11 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, edi + 0x5dcu, in_ebx, in_edi);
    t12 = g->edx;
    g->ebx = t11;
    g->edx = t12;
    t13 = rd32(COW_IMG(0x10662dccu));
    g->esp = sp0 - 0xcu;
    t14 = cow_thiscall(g, COW_IMG(0x101c4740u), t13, 4, esi, t11, edi, 0u);
    t15 = g->ecx;
    t16 = g->edx;
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x1008a890u), t14, g->ecx, t16, 1, 3, t11, edi, in_ebx);
    wr32(COW_IMG(0x10487e88u), esi);
    g->ebx = in_ebx;
    return t11;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1008a7d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1008a7d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
