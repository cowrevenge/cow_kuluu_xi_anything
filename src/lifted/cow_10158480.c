/* f_0x10158480 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=0 */
uint32_t cow_fn_10158480(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
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
    const uint32_t in_ebx = g->ebx;

    g->esp = sp0 - 0xcu;
    t1 = cow_call_regs(g, COW_IMG(0x10159540u), in_eax, self + 0x28u, in_edx, 1, 0);
    t2 = g->edx;
    if ((uint8_t)t1 != 1u)
    {
        eax = t1;
        edx = t2;
    }
    else
    {
        eax = t1;
        edx = t2;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t3 = cow_thiscall(g, COW_IMG(0x10159740u), self + 0x28u, 0);
        t4 = g->edx;
        eax = t3;
        edx = t4;
    }
    if (rd8(self + 0x53u) != 1u) goto L_101584a8;
    wr8(self + 0x53u, 0u);
    ebx = (in_ebx & 0xffffff00u) | 1u;
L_101584b6: ;
    if (rd8(self + 0x59u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x59u);
    }
    else
    {
        if (rd32(self + 0xc4u) != 0u)
        {
            eax = rd32(self + 0xc4u);
        }
        else
        {
            eax = rd32(self + 0xc4u);
            g->esp = sp0 - 0xcu;
            t7 = cow_call_regs(g, COW_IMG(0x1015f3e0u), eax, COW_IMG(0x10621838u), edx, 0, 1, 0x10u);
            t8 = g->edx;
            g->edx = t8;
            t9 = cow_thiscall(g, COW_IMG(0x1015ef20u), COW_IMG(0x10621838u), 0);
            t10 = g->edx;
            g->edx = t10;
            t11 = cow_thiscall(g, COW_IMG(0x10157660u), self, 1, 0u);
            t12 = g->edx;
            g->ebx = ebx;
            g->edx = t12;
            t13 = cow_call_regs(g, COW_IMG(0x10158510u), t11, self, g->edx, 1, 0);
            t14 = g->edx;
            eax = t13;
            edx = t14;
        }
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t15 = cow_thiscall(g, COW_IMG(0x10158590u), self, 0);
    t16 = g->edx;
    t17 = cow_fastcall(g, COW_IMG(0x10158ff0u), self, t16, 0);
    eax = t17;
L_101584fb: ;
    g->ebx = in_ebx;
    return (eax & 0xffffff00u) | (uint8_t)ebx;
L_101584a8: ;
    g->esp = sp0 - 0xcu;
    t5 = cow_call_regs(g, COW_IMG(0x10159540u), eax, self, edx, 1, 0);
    t6 = g->edx;
    if ((uint8_t)t5 != 1u)
    {
        eax = t5;
        ebx = (in_ebx & 0xffffff00u) | (uint8_t)t5;
        goto L_101584fb;
    }
    eax = t5;
    edx = t6;
    ebx = (in_ebx & 0xffffff00u) | (uint8_t)t5;
    goto L_101584b6;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10158480(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10158480(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
