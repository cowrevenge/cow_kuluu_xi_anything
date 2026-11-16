/* f_0x101e08e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=0 */
uint32_t cow_fn_101e08e0(Guest* g)
{
    double d5;
    uint32_t eax;
    uint32_t ecx;
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
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;

    g->ecx = self;
    g->esp = sp0 - 8u;
    t1 = cow_call_regs(g, COW_IMG(0x101cc0d0u), in_eax, g->ecx, in_edx, 1, 2, 0x77u, 0u);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        edx = t3;
        goto L_101e08fe;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    g->eax = eax;
    g->esp = sp0 - 8u;
    t4 = cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    d5 = cow_take_float(g);
    fpush(g, d5);
    return t4 & 0xffffff00u;
L_101e08fe: ;
    g->esi = self;
    g->edx = edx;
    t6 = rd32(COW_IMG(0x10666e2cu));
    g->esp = sp0 - 8u;
    t7 = cow_call_regs(g, COW_IMG(0x101e1f40u), t6, self + 0x14u, g->edx, 0, 1, t6);
    t8 = g->ecx;
    t9 = g->edx;
    if ((uint8_t)t7 != 0u)
    {
        eax = t7;
        ecx = t8;
        edx = t9;
        goto L_101e0915;
    }
    eax = t7;
    g->esi = in_esi;
    return eax;
L_101e0915: ;
    g->esp = sp0 - 8u;
    t10 = cow_call_regs(g, COW_IMG(0x101e0770u), eax, ecx, edx, 1, 2, self + 0x14u, COW_IMG(0x101e0940u));
    t11 = g->edx;
    if ((uint8_t)t10 != 0u)
    {
        eax = t10;
        edx = t11;
        goto L_101e092a;
    }
    eax = t10;
    g->esi = in_esi;
    return eax;
L_101e092a: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t12 = cow_thiscall(g, COW_IMG(0x101e0710u), self, 0);
    t13 = g->edx;
    t14 = cow_fastcall(g, COW_IMG(0x101e0f20u), self, t13, 1, 0u);
    g->esi = in_esi;
    return (t14 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e08e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e08e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
