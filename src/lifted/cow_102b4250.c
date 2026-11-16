/* f_0x102b4250 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_102b4250(Guest* g)
{
    double d7;
    uint32_t eax;
    uint32_t t1;
    uint32_t t10;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 80u);

    wr32(sp0 - 0x1cu, in_ebx);
    wr32(sp0 - 0x20u, in_esi);
    wr32(sp0 - 0x24u, in_edi);
    if (arg1 == 0u)
    {
        eax = in_eax;
        goto L_102b42b0;
    }
    if (arg2 == 0u)
    {
        eax = arg2;
        goto L_102b42b0;
    }
    if (arg3 == 0u)
    {
        eax = arg2;
        goto L_102b42b0;
    }
    if (arg4 == 0u)
    {
        eax = arg2;
        goto L_102b42b0;
    }
    wr32(sp0 - 0x28u, arg3);
    wr32(sp0 - 0x2cu, arg2);
    wr32(sp0 - 0x30u, sp0 - 0xcu);
    g->eax = sp0 - 0xcu;
    g->edx = in_edx;
    g->esp = sp0 - 0x24u;
    t1 = cow_cdecl(g, COW_IMG(0x102749e0u), 3, sp0 - 0xcu, arg2, arg3);
    t2 = g->edx;
    wr32(sp0 - 0x34u, arg4);
    wr32(sp0 - 0x38u, arg3);
    wr32(sp0 - 0x3cu, sp0 - 0x18u);
    g->ecx = sp0 - 0x18u;
    g->esp = sp0 - 0x30u;
    cow_cdecl(g, COW_IMG(0x102749e0u), 3, sp0 - 0x18u, arg3, arg4);
    t3 = g->ecx;
    wr32(sp0 - 0x40u, sp0 - 0x18u);
    wr32(sp0 - 0x44u, sp0 - 0xcu);
    wr32(sp0 - 0x48u, arg1);
    g->eax = sp0 - 0xcu;
    g->ecx = t3;
    g->edx = sp0 - 0x18u;
    g->esp = sp0 - 0x3cu;
    t4 = cow_cdecl(g, COW_IMG(0x102748b0u), 3, arg1, sp0 - 0xcu, sp0 - 0x18u);
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0x4cu, arg1);
    g->esp = sp0 - 0x48u;
    cow_cdecl(g, COW_IMG(0x10274910u), 1, arg1);
    d7 = cow_take_float(g);
    return;
L_102b42b0: ;
    wr32(sp0 - 0x28u, 0xa7u);
    wr32(sp0 - 0x2cu, COW_IMG(0x103bfebcu));
    wr32(sp0 - 0x30u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x28u;
    t8 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bfebcu));
    t9 = g->ecx;
    t10 = g->edx;
    wr32(sp0 - 0x34u, COW_IMG(0x103bfeecu));
    g->esp = sp0 - 0x2cu;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bfeecu), COW_IMG(0x103b379cu));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102b4250(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102b4250(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
