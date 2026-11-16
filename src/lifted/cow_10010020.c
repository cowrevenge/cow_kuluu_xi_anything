/* f_0x10010020 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10010020(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
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
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg3 != 0u) goto L_1001003d;
    return 0x80004003u;
L_1001003d: ;
    wr32(arg3, 0u);
    if (rd32(arg2) != 0u)
    {
        esi = COW_IMG(0x10329bbcu);
        goto L_1001007a;
    }
    if (rd32(arg2 + 4u) != 0u)
    {
        esi = COW_IMG(0x10329bbcu);
        goto L_1001007a;
    }
    if (rd32(arg2 + 8u) != 0xc0u)
    {
        esi = COW_IMG(0x10329bbcu);
        goto L_1001007a;
    }
    if (rd32(arg2 + 0xcu) != 0x46000000u)
    {
        esi = COW_IMG(0x10329bbcu);
        goto L_1001007a;
    }
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, rd32(rd32(arg1) + 4u), self, 1, arg1);
    t1 = g->edx;
    wr32(arg3, arg1);
    g->edx = t1;
    return 0u;
L_1001007a: ;
    t2 = rd32(esi) == 0u;
    if (t2 != 0u)
    {
        ecx = t2;
        ebp = t2;
        goto L_100100af;
    }
    eax = rd32(esi);
    ebp = t2;
    if (rd32(eax) != rd32(arg2))
    {
        edx = rd32(eax);
        goto L_100100d0;
    }
    if (rd32(eax + 4u) != rd32(arg2 + 4u))
    {
        edx = rd32(arg2 + 4u);
        goto L_100100d0;
    }
    if (rd32(eax + 8u) != rd32(arg2 + 8u))
    {
        edx = rd32(eax + 8u);
        goto L_100100d0;
    }
    edx = rd32(eax + 8u);
    if (rd32(eax + 0xcu) != rd32(arg2 + 0xcu)) goto L_100100d0;
    ecx = rd32(arg2 + 0xcu);
L_100100af: ;
    if (rd32(esi + 8u) == 1u) goto L_100100e6;
    eax = rd32(esi + 8u);
    t3 = rd32(esi + 4u);
    g->eax = eax;
    g->edx = arg1;
    g->esp = sp0 - 0x10u;
    t4 = cow_thiscall(g, eax, t3, 4, arg1, arg2, arg3, t3);
    t5 = g->edx;
    if (t4 == 0u)
    {
        eax = t4;
        edx = t5;
        goto L_100100df;
    }
    eax = t4;
    edx = t5;
    if (ebp != 0u) goto L_100100d0;
    if ((int32_t)eax < 0) goto L_100100df;
L_100100d0: ;
    if (rd32(esi + 0x14u) != 0u)
    {
        esi = esi + 0xcu;
        goto L_1001007a;
    }
    eax = 0x80004002u;
L_100100df: ;
    g->edx = edx;
    return eax;
L_100100e6: ;
    t6 = arg1 + rd32(esi + 4u);
    g->edx = arg1;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, rd32(rd32(t6) + 4u), ecx, 1, t6);
    t7 = g->edx;
    wr32(arg3, t6);
    g->edx = t7;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10010020(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10010020(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
