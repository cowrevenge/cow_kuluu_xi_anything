/* f_0x101380e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101380e0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;

    if ((int32_t)rd32(self + 0x20u) >= (int32_t)((uint32_t)(int16_t)rd16(rd32(COW_IMG(0x10578158u)) + 0x1au) - rd32(self + 0x58u)))
    {
        ecx = rd32(COW_IMG(0x10578158u));
        edx = (uint32_t)(int16_t)rd16(rd32(COW_IMG(0x10578158u)) + 0x1au) - rd32(self + 0x58u);
        if (rd32(self + 0x54u) == 0u)
        {
            eax = rd32(self + 0x54u);
            goto L_10138113;
        }
        eax = rd32(self + 0x54u);
        if (eax == 8u) goto L_10138113;
        ebx = in_ebx & 0xffffff00u;
    }
    else
    {
        eax = rd32(self + 0x20u);
        wr32(self + 0x20u, eax + 1u);
        ebx = (in_ebx & 0xffffff00u) | 1u;
    }
L_1013814f: ;
    if ((int32_t)rd32(self + 0x20u) >= 0)
    {
        eax = rd32(self + 0x20u);
        goto L_1013815b;
    }
    eax = rd32(self + 0x20u);
    eax = eax + 0x64u;
L_10138163: ;
    wr32(self + 0x20u, eax);
L_10138166: ;
    if ((uint8_t)ebx == 0u)
    {
        eax = (eax & 0xffffff00u) | (uint8_t)ebx;
    }
    else
    {
        eax = (eax & 0xffffff00u) | (uint8_t)ebx;
        wr8(self + 0x24u, 0u);
    }
    return eax;
L_10138113: ;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_call_regs(g, COW_IMG(0x10129c60u), eax, ecx, g->edx, 1, 0);
    t2 = g->edx;
    t3 = rd32(self + 0x54u);
    g->eax = t3;
    g->edx = t2;
    t4 = cow_thiscall(g, COW_IMG(0x1012a650u), rd32(COW_IMG(0x10578158u)), 2, t3, 0u);
    t5 = g->edx;
    if ((uint8_t)t4 == 0u)
    {
        eax = t4;
        edx = t5;
        edi = (uint32_t)(int16_t)t1;
        ebx = in_ebx & 0xffffff00u;
    }
    else
    {
        eax = t4;
        edx = t5;
        edi = (uint32_t)(int16_t)t1;
        wr32(self + 0x20u, rd32(self + 0x20u) + 1u);
        ebx = (in_ebx & 0xffffff00u) | 1u;
    }
    g->esp = sp0 - 0xcu;
    t6 = cow_call_regs(g, COW_IMG(0x10129c60u), eax, rd32(COW_IMG(0x10578158u)), g->edx, 1, 0);
    t7 = (uint32_t)(int16_t)t6 + rd32(self + 0x20u) - edi;
    wr32(self + 0x20u, t7);
    goto L_1013814f;
L_1013815b: ;
    if ((int32_t)eax < 100) goto L_10138166;
    eax = eax - 0x64u;
    goto L_10138163;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101380e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101380e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
