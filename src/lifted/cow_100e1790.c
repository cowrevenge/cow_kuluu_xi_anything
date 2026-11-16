/* f_0x100e1790 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100e1790(Guest* g)
{
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 148u);

    wr32(sp0 - 0x6cu, in_esi);
    if (arg1 != 0u) goto L_100e17a3;
    return in_eax & 0xffffff00u;
L_100e17a3: ;
    wr32(sp0 - 0x70u, in_edi);
    wr32(sp0 - 0x74u, sp0 - 0x68u);
    g->eax = sp0 - 0x68u;
    g->edx = in_edx;
    g->esp = sp0 - 0x70u;
    t1 = cow_cdecl(g, COW_IMG(0x100dde90u), 1, sp0 - 0x68u);
    t2 = g->edx;
    wr32(sp0 - 0x78u, 0x14u);
    wr32(sp0 - 0x7cu, arg1 + 0x1e8cu);
    wr32(sp0 - 0x80u, sp0 - 0x68u);
    g->ecx = sp0 - 0x68u;
    g->esp = sp0 - 0x74u;
    t3 = cow_cdecl(g, COW_IMG(0x100ddec0u), 3, sp0 - 0x68u, arg1 + 0x1e8cu, 0x14u);
    t4 = g->ecx;
    wr32(sp0 - 0x84u, sp0 - 0x68u);
    g->esp = sp0 - 0x80u;
    cow_cdecl(g, COW_IMG(0x100ddf60u), 1, sp0 - 0x68u);
    t5 = rd32(sp0 - 0x10u);
    t6 = rd32(sp0 - 0xcu);
    t7 = rd32(sp0 - 4u);
    wr32(arg1 + 0x1e8cu, t5);
    t8 = rd32(sp0 - 8u);
    wr32(arg1 + 0x1e90u, t6);
    wr32(arg1 + 0x1e94u, t8);
    wr32(arg1 + 0x1e88u, t8);
    wr32(sp0 - 0x88u, COW_IMG(0x100e1820u));
    wr32(sp0 - 0x8cu, arg1);
    wr32(sp0 - 0x90u, rd32(arg1));
    t9 = rd32(arg1);
    wr32(arg1 + 0x1e98u, t7);
    g->eax = t9;
    g->esp = sp0 - 0x84u;
    t10 = cow_call_regs(g, COW_IMG(0x100d8a20u), g->eax, t6, t7, 1, 3, t9, arg1, COW_IMG(0x100e1820u));
    t11 = g->edx;
    wr32(arg1 + 4u, arg2);
    wr16(arg1 + 8u, (uint16_t)arg3);
    return (t10 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e1790(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100e1790(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
