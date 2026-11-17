/* f_0x10003110 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_10003110(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 252u);

    wr32(sp0 - 0xd8u, in_ebx);
    wr32(sp0 - 0xdcu, in_esi);
    wr32(sp0 - 0xe0u, in_edi);
    edi = sp0 - 0xd4u;
    eax = 0u;
    ecx = 0x35u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0xe4u, sp0 - 0xd4u);
    wr32(sp0 - 0xe8u, arg5);
    wr32(sp0 - 0xecu, arg4);
    wr32(sp0 - 0xf0u, arg3);
    wr32(sp0 - 0xf4u, arg2);
    wr32(sp0 - 0xf8u, arg1);
    g->eax = arg2;
    g->edx = arg3;
    g->esp = sp0 - 0xe0u;
    t1 = cow_thiscall(g, COW_IMG(0x100031f0u), self, 6, arg1, arg2, arg3, arg4, arg5, sp0 - 0xd4u);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        ecx = t2;
        goto L_100031c8;
    }
    ecx = t2;
    edx = t3;
    if ((rd32(sp0 - 0xb8u) & 0x80000u) != 0u)
    {
        eax = rd32(sp0 - 0xb8u);
        goto L_10003186;
    }
    eax = rd32(sp0 - 0xb8u);
    wr32(sp0 - 0xe4u, 0x7d0u);
    g->eax = eax;
    g->esp = sp0 - 0xe0u;
    t4 = cow_cdecl(g, COW_IMG(0x100164c0u), 1, 0x7d0u);
    return t4 & 0xffffff00u;
L_10003186: ;
    if ((uint8_t)arg5 == 1u) goto L_100031ad;
    if ((eax & 0x10000u) != 0u) goto L_100031ad;
    wr32(sp0 - 0xe4u, 0x7d1u);
    g->eax = eax;
    g->esp = sp0 - 0xe0u;
    t5 = cow_cdecl(g, COW_IMG(0x100164c0u), 1, 0x7d1u);
    return t5 & 0xffffff00u;
L_100031ad: ;
    wr32(sp0 - 0xe4u, 0x7d0u);
    g->eax = eax;
    g->esp = sp0 - 0xe0u;
    t6 = cow_cdecl(g, COW_IMG(0x100164c0u), 1, 0x7d0u);
    return t6 & 0xffffff00u;
L_100031c8: ;
    wr32(sp0 - 0xe4u, self + 0x48u);
    wr32(sp0 - 0xe8u, 2u);
    wr32(sp0 - 0xecu, 0u);
    t7 = rd32(self + 4u);
    wr32(sp0 - 0xf0u, t7);
    g->eax = t7;
    g->esp = sp0 - 0xe0u;
    t8 = cow_thiscall(g, rd32(rd32(rd32(self + 4u)) + 0x14u), ecx, 4, t7, 0u, 2u, self + 0x48u);
    return (t8 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10003110(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10003110(g);
    g->esp = sp0;
    rt_return(g, r, 20u);
}
/* COW_ADAPTER END */
