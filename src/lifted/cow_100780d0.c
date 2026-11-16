/* f_0x100780d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=8 */
uint32_t cow_fn_100780d0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg8 = rd32(g->esp + 0x20u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->eax = arg8;
    g->ecx = self;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x100fc3c0u), 3, 0x1au, arg8, 0u);
    t2 = g->ecx;
    if (t1 == 0u)
    {
        eax = t1;
        goto L_1007812c;
    }
    eax = t1;
    ecx = t2;
    wr16(eax + 8u, (uint16_t)arg1);
    wr32(eax + 4u, arg2);
    wr16(eax + 0xau, (uint16_t)arg3);
    wr32(eax + 0xcu, arg4);
    wr32(eax + 0x10u, arg5);
    wr32(eax + 0x14u, arg6);
    wr32(eax + 0x18u, arg7);
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x100fc4d0u), 3, eax, 0x1cu, 0u);
    return 0u;
L_1007812c: ;
    return 0xffffffffu;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100780d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100780d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
