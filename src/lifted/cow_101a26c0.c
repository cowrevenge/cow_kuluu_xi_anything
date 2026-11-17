/* f_0x101a26c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_101a26c0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
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
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 684u);

    wr32(sp0 - 0x284u, in_ebx);
    wr32(sp0 - 0x288u, in_esi);
    wr32(sp0 - 0x28cu, in_edi);
    wr32(sp0 - 0x290u, arg2);
    wr32(sp0 - 0x294u, arg1);
    wr32(sp0 - 0x298u, sp0 - 0x280u);
    g->esp = sp0 - 0x28cu;
    cow_stdcall(g, COW_IMG(0x101a2610u), 3, sp0 - 0x280u, arg1, arg2);
    if (arg1 != 0u)
    {
        eax = COW_IMG(0x101a1e20u);
        ebx = COW_IMG(0x101a1fb0u);
    }
    else
    {
        eax = COW_IMG(0x101a1fe0u);
        ebx = COW_IMG(0x101a23b0u);
    }
    wr32(sp0 - 0x290u, 1u);
    wr32(sp0 - 0x294u, self);
    wr32(sp0 - 0x298u, eax);
    wr32(sp0 - 0x29cu, sp0 - 0x280u);
    wr32(sp0 - 0x2a0u, 1u);
    g->eax = eax;
    g->edx = sp0 - 0x280u;
    g->esp = sp0 - 0x28cu;
    t1 = cow_thiscall(g, COW_IMG(0x101b9910u), sp0 - 0x120u, 5, 1u, sp0 - 0x280u, eax, self, 1u);
    t2 = g->edx;
    wr32(sp0 - 0x290u, 0u);
    g->edx = t2;
    cow_thiscall(g, COW_IMG(0x101b9bc0u), sp0 - 0x120u, 1, 0u);
    t3 = g->edx;
    wr32(sp0 - 0x290u, 1u);
    wr32(sp0 - 0x294u, self);
    wr32(sp0 - 0x298u, ebx);
    wr32(sp0 - 0x29cu, 0x1db0u);
    wr32(sp0 - 0x2a0u, self + 4u);
    wr32(sp0 - 0x2a4u, sp0 - 0x280u);
    wr32(sp0 - 0x2a8u, 1u);
    g->eax = sp0 - 0x280u;
    g->edx = t3;
    t4 = cow_thiscall(g, COW_IMG(0x101b9880u), sp0 - 0x240u, 7, 1u, sp0 - 0x280u, self + 4u, 0x1db0u, ebx, self, 1u);
    t5 = g->edx;
    wr32(sp0 - 0x290u, self + 4u);
    g->edx = t5;
    t6 = cow_thiscall(g, COW_IMG(0x101b9f90u), rd32(COW_IMG(0x10662db0u)), 1, self + 4u);
    t7 = g->edx;
    wr32(sp0 - 0x290u, sp0 - 0x240u);
    g->edx = t7;
    t8 = cow_thiscall(g, COW_IMG(0x101b9ec0u), rd32(COW_IMG(0x10662db0u)), 1, sp0 - 0x240u);
    t9 = g->edx;
    g->edx = t9;
    t10 = cow_thiscall(g, COW_IMG(0x101b9a00u), sp0 - 0x240u, 0);
    t11 = g->edx;
    cow_thiscall(g, COW_IMG(0x101b9a00u), sp0 - 0x120u, 0);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a26c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101a26c0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
