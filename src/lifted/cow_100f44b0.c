/* f_0x100f44b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100f44b0(Guest* g)
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

    if (arg1 > 3u) goto L_100f453f;
    t1 = rd32(COW_IMG(0x100f4548u) + arg1 * 4u);
    switch (t1 - RD)
    {
    case 0x100f44c5u: goto L_100f44c5;
    case 0x100f44cbu: goto L_100f44cb;
    case 0x100f44d4u: goto L_100f44d4;
    case 0x100f4536u: goto L_100f4536;
    default: rt_fatal(g, COW_IMG(0x100f44beu), "switch");
    }
    return 0;
L_100f44c5: ;
    return 0u;
L_100f44cb: ;
    return 0x16u;
L_100f44d4: ;
    g->eax = arg1;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t2 = cow_thiscall(g, rd32(COW_IMG(0x103291ecu)), self + 0xe48u, 7, self + 0xe48u, 0x80000000u, 1u, 0u, 3u, 0x80u, 0u);
    t3 = g->ecx;
    t4 = g->edx;
    if (t2 != 0xffffffffu)
    {
        eax = t2;
        ecx = t3;
        edx = t4;
        esi = t2;
        goto L_100f4511;
    }
    if (arg2 != 0u)
    {
        wr32(arg2, 0u);
    }
    return 0x10u;
L_100f4511: ;
    if (arg2 != 0u)
    {
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t5 = cow_thiscall(g, rd32(COW_IMG(0x103291e8u)), ecx, 2, esi, 0u);
        t6 = g->ecx;
        t7 = g->edx;
        wr32(arg2, t5);
        eax = t5;
        ecx = t6;
        edx = t7;
    }
    g->esp = sp0 - 8u;
    cow_thiscall(g, rd32(COW_IMG(0x10329104u)), ecx, 1, esi);
    return 0x17u;
L_100f4536: ;
    return 6u;
L_100f453f: ;
    return 0x15u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f44b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100f44b0(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
