/* f_0x10210e30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=7 */
uint32_t cow_fn_10210e30(Guest* g)
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
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(self + 0x14u) == 0u) goto L_10210e40;
    eax = rd32(self + 0x14u);
    return eax & 0xffffff00u;
L_10210e40: ;
    if (rd16(rd32(COW_IMG(0x1057876cu)) + 0x68u) != 0u)
    {
        eax = rd32(COW_IMG(0x1057876cu));
        wr16(eax + 0x68u, 0u);
    }
    wr32(self + 0x18u, arg2);
    wr32(self + 0x14u, arg1);
    wr32(self + 0x1cu, arg3);
    wr32(self + 0x34u, arg5);
    wr8(self + 0x3cu, 0u);
    if ((uint8_t)arg6 != 0u)
    {
        wr8(self + 0x39u, rd8(self + 0x38u));
    }
    else
    {
        wr8(self + 0x39u, 0u);
    }
    wr8(self + 0x3au, 0u);
    if (arg5 == 0u)
    {
        eax = arg5;
    }
    else
    {
        if (rd32(COW_IMG(0x1057847cu)) == 0u)
        {
            eax = arg5;
        }
        else
        {
            ecx = rd32(COW_IMG(0x1057847cu));
            g->eax = arg5;
            g->esp = sp0 - 4u;
            t1 = cow_thiscall(g, COW_IMG(0x10150cc0u), ecx, 2, arg5, 2u);
            eax = t1;
        }
    }
    g->eax = eax;
    g->edx = self + 0x20u;
    g->esp = sp0 - 4u;
    t2 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, self + 0x20u, 1u, 0u);
    t3 = g->edx;
    if (t2 != 0u)
    {
        eax = t2;
        edx = t3;
        goto L_10210ebf;
    }
    eax = t2;
    wr32(self + 0x14u, eax);
    return eax & 0xffffff00u;
L_10210ebf: ;
    if ((uint8_t)arg4 == 0u)
    {
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_call_regs(g, COW_IMG(0x10118e90u), eax, rd32(self + 8u), g->edx, 0, 1, 2u);
        t4 = g->edx;
        edx = t4;
    }
    wr32(self + 0x40u, arg7);
    if (arg7 == 0u)
    {
        wr8(rd32(self + 8u) + 0x86u, 1u);
        eax = arg7;
    }
    else
    {
        t5 = rd32(self + 8u);
        wr8(t5 + 0x86u, 0u);
        eax = t5;
    }
    t6 = -((uint8_t)arg4 != 0u) + 2u;
    g->ebx = t6;
    g->eax = eax;
    g->esp = sp0 - 8u;
    t7 = cow_thiscall(g, COW_IMG(0x102112b0u), self, 1, t6);
    g->ebx = in_ebx;
    return (t7 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10210e30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10210e30(g);
    g->esp = sp0;
    rt_return(g, r, 28u);
}
/* COW_ADAPTER END */
