/* f_0x1029cfe0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1029cfe0(Guest* g)
{
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 != 0u) goto L_1029d010;
    g->eax = in_eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t2 = g->ecx;
    t3 = g->edx;
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bc9a4u), COW_IMG(0x103b379cu));
L_1029d00b: ;
    return 0u;
L_1029d010: ;
    if ((int32_t)rd32(COW_IMG(0x109a2854u)) <= 0) goto L_1029d00b;
    edx = in_edx;
    esi = 0u;
L_1029d01b: ;
    t4 = rd32(esi * 4u + rd32(COW_IMG(0x109a284cu)));
    g->eax = rd32(COW_IMG(0x109a284cu));
    t5 = rd32(COW_IMG(0x109a284cu));
    g->esp = sp0 - 8u;
    t6 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, t4, edx, 1, 2, arg1, t4);
    t7 = g->edx;
    if (t6 == 0u) goto L_1029d040;
    edx = t7;
    if ((int32_t)(esi + 1u) < (int32_t)rd32(COW_IMG(0x109a2854u)))
    {
        esi = esi + 1u;
        goto L_1029d01b;
    }
    return 0u;
L_1029d040: ;
    return rd32(esi * 4u + rd32(COW_IMG(0x109a2850u)));
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1029cfe0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1029cfe0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
