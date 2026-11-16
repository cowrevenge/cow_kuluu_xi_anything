/* f_0x10279f60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10279f60(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((int32_t)rd32(arg1 + 0x44u) <= 0)
    {
        eax = rd32(arg1 + 0x44u);
        ecx = self;
        edx = in_edx;
        goto L_10279f8a;
    }
    eax = rd32(arg1 + 0x44u);
    ecx = self;
    edx = in_edx;
    esi = 0u;
L_10279f74: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_cdecl(g, COW_IMG(0x10279890u), 2, arg1, esi);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == arg2)
    {
        ecx = t2;
        edx = t3;
        goto L_10279fb2;
    }
    ecx = t2;
    edx = t3;
    if ((int32_t)(esi + 1u) < (int32_t)rd32(arg1 + 0x44u))
    {
        eax = rd32(arg1 + 0x44u);
        esi = esi + 1u;
        goto L_10279f74;
    }
    eax = rd32(arg1 + 0x44u);
L_10279f8a: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t5 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103b37ecu));
    t6 = g->ecx;
    t7 = g->edx;
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b3e44u), arg2);
    return 0u;
L_10279fb2: ;
    g->esp = sp0 - 0xcu;
    t4 = cow_cdecl(g, COW_IMG(0x10279ad0u), 3, arg1, 2u, esi);
    return t4;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10279f60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10279f60(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
