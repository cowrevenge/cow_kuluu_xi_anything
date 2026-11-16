/* f_0x101ba9d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101ba9d0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
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
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_ebp);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    wr8(sp0 - 8u, 0u);
    wr8(sp0 - 7u, 0u);
    wr8(sp0 - 6u, 0u);
    wr8(sp0 - 5u, 0u);
    wr32(sp0 - 4u, 0u);
    if ((int32_t)arg1 <= 0)
    {
        eax = 0u;
        goto L_101baa9c;
    }
    eax = 0u;
    ecx = arg1;
    edx = in_edx;
    ebp = 0u;
    esi = 0u;
    edi = rd32(sp0 + 8u);
    loc_4 = 0u;
L_101baa03: ;
    t1 = rd8(edi + esi + 1u);
    t2 = rd8(edi + esi);
    t3 = rd8(edi + esi + 2u);
    wr8(sp0 - 7u, (uint8_t)t1);
    t4 = rd8(edi + esi + 3u);
    wr8(sp0 - 6u, (uint8_t)t3);
    wr8(sp0 - 5u, (uint8_t)t4);
    wr8(sp0 + 8u, rd8(edi + esi + 4u));
    t5 = rd32(sp0 + 8u);
    wr8(sp0 - 8u, (uint8_t)t2);
    if ((uint8_t)t2 < 7u)
    {
        edx = esi + 5u;
        esi = esi + (uint8_t)t5 + 5u;
        goto L_101baa44;
    }
    eax = (uint8_t)t5;
    ecx = (ecx & 0xffffff00u) | t2;
    edx = esi + 5u;
    esi = esi + (uint8_t)t5 + 5u;
    if ((uint8_t)ecx < 0x13u) goto L_101baa6e;
L_101baa44: ;
    wr32(sp0 - 0x1cu, sp0 + 8u);
    wr32(sp0 - 0x20u, edi + edx);
    g->ebx = self;
    g->eax = sp0 + 8u;
    g->esp = sp0 - 0x18u;
    t7 = cow_stdcall(g, COW_IMG(0x101ba5d0u), 2, edi + edx, sp0 + 8u);
    t8 = rd32(sp0 - 8u);
    wr32(sp0 - 0x1cu, t8);
    t9 = (uint8_t)rd32(sp0 + 8u) - 1u;
    wr32(sp0 - 0x20u, t9);
    wr32(sp0 - 0x24u, t7);
    eax = rd32(self + 0x18u);
    ecx = rd32(ebp * 4u + rd32(self + 0x18u) + 4u);
    edx = t9;
    loc_1c = t8;
    loc_20 = t9;
    loc_24 = t7;
L_101baa7e: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t10 = cow_thiscall(g, COW_IMG(0x101bc7b0u), ecx, 3, loc_24, loc_20, loc_1c);
    t11 = g->ecx;
    t12 = g->edx;
    if ((uint8_t)t10 == 0u)
    {
        eax = t10;
        goto L_101baaa8;
    }
    ecx = t11;
    edx = t12;
    t13 = rd32(sp0 - 4u) + 1u;
    wr32(sp0 - 4u, t13);
    if ((int32_t)(rd32(sp0 - 4u) + 1u) < (int32_t)arg1)
    {
        eax = arg1;
        ebp = t13;
        loc_4 = t13;
        goto L_101baa03;
    }
    eax = arg1;
L_101baa9c: ;
    g->ebx = in_ebx;
    return (eax & 0xffffff00u) | 1u;
L_101baa6e: ;
    t6 = rd32(sp0 - 8u);
    wr32(sp0 - 0x1cu, t6);
    wr32(sp0 - 0x20u, eax);
    wr32(sp0 - 0x24u, edi + edx);
    ecx = rd32(ebp * 4u + rd32(self + 0x18u) + 4u);
    loc_1c = t6;
    loc_20 = eax;
    loc_24 = edi + edx;
    edx = rd32(self + 0x18u);
    goto L_101baa7e;
L_101baaa8: ;
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    g->ebp = rd32(sp0 - 0x10u);
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ba9d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101ba9d0(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
