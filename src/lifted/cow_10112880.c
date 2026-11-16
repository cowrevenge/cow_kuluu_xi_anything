/* f_0x10112880 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10112880(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 4132u);

    wr32(sp0 - 0x1004u, in_esi);
    wr32(sp0 - 0x1008u, in_edi);
    if ((int32_t)arg2 <= 0) goto L_101128ad;
    eax = 0x1000u;
    edx = in_edx;
    esi = arg2;
L_1011289e: ;
    wr32(sp0 - 0x100cu, COW_IMG(0x1036bfe4u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1008u;
    t1 = cow_thiscall(g, COW_IMG(0x1010c720u), arg1, 1, COW_IMG(0x1036bfe4u));
    t2 = g->edx;
    if (esi != 1u)
    {
        eax = t1;
        edx = t2;
        esi = esi - 1u;
        goto L_1011289e;
    }
L_101128ad: ;
    wr32(sp0 - 0x100cu, arg6);
    wr32(sp0 - 0x1010u, arg5);
    wr32(sp0 - 0x1014u, arg4);
    wr32(sp0 - 0x1018u, arg3);
    wr32(sp0 - 0x101cu, COW_IMG(0x1036bff4u));
    wr32(sp0 - 0x1020u, sp0 - 0x1000u);
    g->eax = arg3;
    g->esp = sp0 - 0x100cu;
    t3 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x1000u, COW_IMG(0x1036bff4u), arg3, arg4, arg5);
    wr32(sp0 - 0x100cu, sp0 - 0x1000u);
    g->esp = sp0 - 0x1008u;
    t4 = cow_thiscall(g, COW_IMG(0x1010c720u), arg1, 1, sp0 - 0x1000u);
    return (t4 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10112880(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10112880(g);
    g->esp = sp0;
    rt_return(g, r, 24u);
}
/* COW_ADAPTER END */
