/* f_0x101c3d00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_101c3d00(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(rd32(COW_IMG(0x103d3cb8u)) + 0x28u) == 0u)
    {
        eax = rd32(COW_IMG(0x103d3cb8u));
        goto L_101c3da5;
    }
    eax = rd32(COW_IMG(0x103d3cb8u));
    if (rd8(rd32(COW_IMG(0x104568fcu)) + 9u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(rd32(COW_IMG(0x104568fcu)) + 9u);
        goto L_101c3da5;
    }
    ecx = rd32(COW_IMG(0x104568fcu));
    if (arg3 == 0u) goto L_101c3d33;
    eax = arg3;
    edx = arg1;
L_101c3d5b: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, arg2, COW_IMG(0x1037cd24u), self + 0x1f4u, eax, arg1);
    t6 = g->edx;
    g->edx = t6;
    return 1u;
L_101c3d33: ;
    if (rd32(rd32(COW_IMG(0x10456a28u))) == 0x40u) goto L_101c3d7e;
    eax = rd32(rd32(COW_IMG(0x10456a28u)));
    if (eax == 0u) goto L_101c3d7e;
    t1 = rd32(rd32(COW_IMG(0x103601bcu)) + 0x80u);
    g->eax = t1;
    g->ecx = rd32(COW_IMG(0x103601bcu));
    g->edx = arg1;
    t2 = rd32(COW_IMG(0x103601bcu));
    g->esp = sp0 - 8u;
    t3 = cow_stdcall(g, COW_IMG(0x100db790u), 1, t1);
    t4 = g->ecx;
    t5 = g->edx;
    eax = t3;
    ecx = t4;
    edx = t5;
    goto L_101c3d5b;
L_101c3d7e: ;
    g->edx = arg2;
    g->esp = sp0;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, arg2, COW_IMG(0x1037cba0u), self + 0x1f4u, arg1, in_esi);
    t7 = g->edx;
    g->edx = t7;
    return 1u;
L_101c3da5: ;
    return 0xffffffffu;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c3d00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101c3d00(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
