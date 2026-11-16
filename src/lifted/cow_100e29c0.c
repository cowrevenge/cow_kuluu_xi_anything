/* f_0x100e29c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=6 */
uint32_t cow_fn_100e29c0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(COW_IMG(0x104df770u)) == 0u)
    {
        eax = rd32(COW_IMG(0x104df770u));
        goto L_100e2a84;
    }
    eax = rd32(COW_IMG(0x104df770u));
    if (rd32(eax + 0x1369cu) == 0u) goto L_100e2a84;
    edi = rd32(eax + 0x1369cu);
    if ((rd32(arg1) >> 8u & 0x10u) == 0u)
    {
        edx = in_edx;
    }
    else
    {
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        t1 = cow_call_regs(g, COW_IMG(0x100e3070u), arg1 + 0x6cu, self, g->edx, 1, 3, 0u, arg1 + 0x6cu, 0xc8u);
        t2 = g->edx;
        wr16(arg1 + 0x68u, (uint16_t)t1);
        if ((uint16_t)t1 <= 0xc8u)
        {
            edx = t2;
        }
        else
        {
            edx = t2;
            wr16(arg1 + 0x68u, 0xc8u);
        }
    }
    if ((rd32(arg1) & 0x1000000u) != 0u)
    {
        g->esp = sp0 - 0xcu;
        t3 = cow_cdecl(g, COW_IMG(0x100e3130u), 2, 0u, arg1 + 0x390u);
        wr16(arg1 + 0x38cu, (uint16_t)t3);
        if ((uint16_t)t3 > 0x40u)
        {
            wr16(arg1 + 0x38cu, 0x40u);
        }
    }
    g->ecx = arg4;
    g->edx = arg3;
    g->esp = sp0 - 8u;
    t4 = cow_cdecl(g, COW_IMG(0x100e1c30u), 12, edi, arg1, 0u, 0u, 0u, 0u, 0u, arg2, arg3, arg4, arg5, arg6);
    t5 = g->ecx;
    t6 = g->edx;
    if (t4 == 0u)
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        loc_10 = edi;
        goto L_100e2a7c;
    }
    eax = t4;
    ecx = t5;
    edx = t6;
    loc_10 = edi;
    g->eax = eax;
    g->esp = sp0 - 8u;
    t7 = cow_cdecl(g, COW_IMG(0x100e1c00u), 2, loc_10, arg1);
    return (t7 & 0xffffff00u) | 1u;
L_100e2a7c: ;
    g->eax = eax;
    g->esp = sp0 - 8u;
    t8 = cow_cdecl(g, COW_IMG(0x100e1c00u), 2, loc_10, arg1);
    eax = t8;
L_100e2a84: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e29c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100e29c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
