/* f_0x1026fa00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1026fa00(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 4u, in_esi);
    wr32(sp0 - 8u, in_edi);
    if (arg2 != 0xffffffffu)
    {
        edx = rd32(COW_IMG(0x1099aedcu));
        esi = arg1 * 0xc0u + rd32(COW_IMG(0x1099aedcu));
        goto L_1026fa54;
    }
    edx = rd32(COW_IMG(0x1099aedcu));
    esi = arg1 * 0xc0u + rd32(COW_IMG(0x1099aedcu));
    wr32(sp0 - 0xcu, sp0 + 4u);
    wr32(sp0 - 0x10u, arg1);
    g->ecx = self;
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x1026f5a0u), 2, arg1, sp0 + 4u);
    t1 = g->ecx;
    t2 = g->edx;
    if (arg1 != 0u)
    {
        eax = arg1;
        edx = t2;
        goto L_1026fa79;
    }
    ecx = t1;
    wr32(sp0 - 0xcu, 1u);
    t3 = rd32(esi + 0xb4u);
    wr32(sp0 - 0x10u, t3);
    g->eax = arg1;
    g->ecx = ecx;
    g->edx = t3;
    g->esp = sp0 - 8u;
    t4 = cow_cdecl(g, COW_IMG(0x10284ff0u), 2, t3, 1u);
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0x14u, 1u);
    wr32(sp0 - 0x18u, 0x80u);
    wr32(sp0 - 0x1cu, arg1);
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x1026f9c0u), 3, arg1, 0x80u, 1u);
    g->esi = rd32(sp0 - 4u);
    g->edi = rd32(sp0 - 8u);
    return;
L_1026fa54: ;
    if (arg2 == 0u)
    {
        eax = arg2;
        goto L_1026fa79;
    }
    wr32(sp0 - 0xcu, 1u);
    t7 = rd32(esi + 0xb4u);
    wr32(sp0 - 0x10u, t7);
    g->eax = t7;
    g->ecx = self;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t8 = cow_cdecl(g, COW_IMG(0x10284ff0u), 2, t7, 1u);
    t9 = g->ecx;
    t10 = g->edx;
    wr32(sp0 - 0x14u, 1u);
    wr32(sp0 - 0x18u, 0x80u);
    wr32(sp0 - 0x1cu, arg1);
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x1026f9c0u), 3, arg1, 0x80u, 1u);
    return;
L_1026fa79: ;
    wr32(sp0 - 0xcu, 0u);
    t11 = rd32(esi + 0xb4u);
    wr32(sp0 - 0x10u, t11);
    g->eax = eax;
    g->ecx = t11;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t12 = cow_cdecl(g, COW_IMG(0x10284ff0u), 2, t11, 0u);
    t13 = g->ecx;
    t14 = g->edx;
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 0x80u);
    wr32(sp0 - 0x1cu, arg1);
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x1026f9c0u), 3, arg1, 0x80u, 0u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1026fa00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1026fa00(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
