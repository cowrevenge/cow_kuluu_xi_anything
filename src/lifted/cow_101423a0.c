/* f_0x101423a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101423a0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd8(COW_IMG(0x105782abu)) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x105782abu));
        goto L_101423e6;
    }
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t3;
        goto L_101423d2;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t4 = cow_thiscall_cdecl(g, COW_IMG(0x10062ed0u), ecx, 4, 0x113bdu, 0x72617473u, eax, eax);
    t5 = g->edx;
    if ((uint8_t)t4 != 0u)
    {
        eax = t4;
        edx = t5;
        goto L_101423d9;
    }
    eax = t4;
    edx = t5;
L_101423d2: ;
    wr8(COW_IMG(0x105782abu), 0u);
L_101423d9: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t6 = cow_call_regs(g, COW_IMG(0x10142360u), eax, self, g->edx, 0, 1, 0u);
    t7 = g->edx;
    g->edx = t7;
    return t6;
L_101423e6: ;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t8 = cow_call_regs(g, COW_IMG(0x10142360u), eax, self, g->edx, 0, 1, 1u);
    t9 = g->edx;
    g->edx = t9;
    return t8;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101423a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101423a0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
