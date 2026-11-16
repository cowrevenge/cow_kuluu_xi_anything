/* f_0x10112780 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10112780(Guest* g)
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
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 4124u);

    wr32(sp0 - 0x1004u, in_esi);
    wr32(sp0 - 0x1008u, in_edi);
    if ((int32_t)arg2 <= 0)
    {
        ecx = self;
        edx = in_edx;
        goto L_101127ad;
    }
    eax = 0x1000u;
    edx = in_edx;
    esi = arg2;
L_1011279e: ;
    wr32(sp0 - 0x100cu, COW_IMG(0x1036bfe4u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1008u;
    t1 = cow_thiscall(g, COW_IMG(0x1010c720u), arg1, 1, COW_IMG(0x1036bfe4u));
    t2 = g->ecx;
    t3 = g->edx;
    if (esi != 1u)
    {
        eax = t1;
        edx = t3;
        esi = esi - 1u;
        goto L_1011279e;
    }
    ecx = t2;
    edx = t3;
L_101127ad: ;
    if (arg4 == 0u)
    {
        wr32(sp0 - 0x100cu, arg3);
        wr32(sp0 - 0x1010u, COW_IMG(0x10361dc0u));
        wr32(sp0 - 0x1014u, sp0 - 0x1000u);
        g->eax = sp0 - 0x1000u;
        g->edx = arg3;
        g->esp = sp0 - 0x1000u;
        t6 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x1000u, COW_IMG(0x10361dc0u), arg3, in_edi, in_esi);
        t7 = g->edx;
        eax = t6;
        edx = t7;
    }
    else
    {
        wr32(sp0 - 0x100cu, arg4);
        wr32(sp0 - 0x1010u, arg3);
        wr32(sp0 - 0x1014u, COW_IMG(0x1036bfdcu));
        wr32(sp0 - 0x1018u, sp0 - 0x1000u);
        g->eax = arg3;
        g->edx = edx;
        g->esp = sp0 - 0x1004u;
        t4 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x1000u, COW_IMG(0x1036bfdcu), arg3, arg4, in_edi);
        t5 = g->edx;
        eax = t4;
        edx = t5;
    }
    wr32(sp0 - 0x100cu, sp0 - 0x1000u);
    g->eax = eax;
    g->esp = sp0 - 0x1008u;
    t8 = cow_thiscall(g, COW_IMG(0x1010c720u), arg1, 1, sp0 - 0x1000u);
    g->esi = rd32(sp0 - 0x1004u);
    g->edi = rd32(sp0 - 0x1008u);
    return (t8 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10112780(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10112780(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
