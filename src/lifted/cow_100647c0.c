/* f_0x100647c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100647c0(Guest* g)
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self + 0x22cu) != 0x40u) goto L_100647e8;
    g->esp = sp0 - 0xcu;
    t1 = cow_call_regs(g, COW_IMG(0x10313cefu), g->eax, self, in_edx, 1, 2, COW_IMG(0x10353ae8u), arg1);
    return t1 & 0xffffff00u;
L_100647e8: ;
    g->esp = sp0 - 4u;
    t2 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, self, in_edx, 1, 3, 0xcu, in_edi, in_esi);
    t3 = g->edx;
    if (t2 == 0u) goto L_10064840;
    eax = t2;
    edx = t3;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t4 = cow_thiscall(g, COW_IMG(0x1006b7a0u), eax, 0);
    t5 = g->edx;
    if (t4 == 0u)
    {
        esi = t4;
        goto L_10064842;
    }
    edx = t5;
    esi = t4;
    g->edi = self;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t6 = cow_thiscall(g, COW_IMG(0x1006b7c0u), esi, 3, arg1, 1u, 0x1000u);
    t7 = g->ecx;
    t8 = g->edx;
    if (t6 != 0u) goto L_10064842;
    ecx = t7;
    edx = t8;
    g->ebx = arg1;
    g->esp = sp0 - 0xcu;
    t9 = cow_call_regs(g, COW_IMG(0x10313cefu), g->eax, ecx, edx, 1, 2, COW_IMG(0x10353ad8u), arg1);
    t10 = g->edx;
    g->edi = self;
    g->edx = t10;
    t11 = cow_thiscall(g, COW_IMG(0x1006b7b0u), esi, 0);
    t12 = g->ecx;
    t13 = g->edx;
    t14 = cow_cdecl(g, COW_IMG(0x10311bf0u), 1, esi);
    g->ebx = in_ebx;
    g->edi = in_edi;
    return t14 & 0xffffff00u;
L_10064840: ;
    esi = 0u;
L_10064842: ;
    wr32(self + rd32(self + 0x22cu) * 4u + 0x230u, esi);
    t15 = rd32(self + 0x22cu) + 1u;
    wr32(self + 0x22cu, t15);
    g->ebx = in_ebx;
    g->edi = in_edi;
    return (t15 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100647c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100647c0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
