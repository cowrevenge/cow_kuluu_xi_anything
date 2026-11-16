/* f_0x101e6780 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101e6780(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
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
    cow_frame(g, sp0, 48u);

    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_ebp);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    if ((int32_t)arg1 < 1) goto L_101e688e;
    if (rd32(self + 8u) == 0u) goto L_101e688e;
    g->edx = in_edx;
    t1 = rd32(COW_IMG(0x10663524u));
    g->esp = sp0 - 0x1cu;
    t2 = cow_thiscall(g, COW_IMG(0x1020a420u), t1, 0);
    t3 = g->ecx;
    t4 = g->edx;
    if (t2 == 0u) goto L_101e688e;
    ecx = t3;
    edx = t4;
    edi = t2;
    wr32(sp0 - 0x20u, sp0 - 0xcu);
    t5 = (ecx & 0xffffff00u) | rd8(self + 0x14u);
    wr32(sp0 - 0x24u, t5);
    wr32(sp0 - 0xcu, 0u);
    t6 = rd32(sp0 - 8u);
    g->esp = sp0 - 0x18u;
    t7 = cow_thiscall_cdecl(g, COW_IMG(0x101e4ca0u), t5, 3, t5, sp0 - 0xcu, rd32(sp0 - 0x1cu));
    if ((uint8_t)t7 == 0u) goto L_101e688e;
    wr32(sp0 - 0x20u, sp0 - 8u);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, edi + 0x40u);
    g->esp = sp0 - 0x1cu;
    t8 = cow_cdecl(g, COW_IMG(0x101e4ce0u), 3, edi + 0x40u, 0u, sp0 - 8u);
    if ((uint8_t)t8 == 0u) goto L_101e688e;
    eax = t8;
    if (rd8(edi + (uint8_t)rd32(sp0 - 8u) + 0x3cu) != 1u)
    {
        eax = (eax & 0xffffff00u) | rd8(edi + (uint8_t)rd32(sp0 - 8u) + 0x3cu);
        edx = (uint8_t)rd32(sp0 - 8u);
        ebp = edi + (uint8_t)rd32(sp0 - 8u) + 0x3cu;
        goto L_101e6825;
    }
    eax = (eax & 0xffffff00u) | rd8(edi + (uint8_t)rd32(sp0 - 8u) + 0x3cu);
    edx = (uint8_t)rd32(sp0 - 8u);
    wr32(sp0 - 0x20u, arg1);
    wr32(sp0 - 0x24u, 5u);
    g->esp = sp0 - 0x1cu;
    cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, arg1);
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    g->ebp = rd32(sp0 - 0x14u);
    return;
L_101e6825: ;
    t9 = (eax & 0xffffff00u) | rd8(self + 0x14u);
    wr32(sp0 - 0x20u, t9);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, 0u);
    wr32(sp0 - 0x2cu, sp0 - 4u);
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t10 = cow_thiscall_cdecl(g, COW_IMG(0x100e9730u), sp0 - 4u, 4, sp0 - 4u, 0u, 0u, t9);
    t11 = g->ecx;
    t12 = g->edx;
    if ((uint8_t)t10 == 0u)
    {
        edx = t12;
        goto L_101e6865;
    }
    eax = t10;
    ecx = t11;
    if (rd8(rd32(sp0 - 4u) + 8u) != rd8(ebp))
    {
        edx = rd32(sp0 - 4u);
        goto L_101e6865;
    }
    eax = (eax & 0xffffff00u) | rd8(rd32(sp0 - 4u) + 8u);
    edx = rd32(sp0 - 4u);
    wr32(sp0 - 0x20u, arg1);
    wr32(sp0 - 0x24u, 5u);
    g->esp = sp0 - 0x1cu;
    cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, arg1);
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    g->ebp = rd32(sp0 - 0x14u);
    return;
L_101e6865: ;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t13 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
    t14 = g->edx;
    if (t13 != 0u)
    {
        eax = t13;
        edx = t14;
        g->esp = sp0 - 0x1cu;
        t15 = cow_thiscall(g, COW_IMG(0x10082fa0u), eax, 0);
        if (t15 == rd32(edi + 0x1cu))
        {
            eax = t15;
            wr32(sp0 - 0x20u, arg1);
            wr32(sp0 - 0x24u, 5u);
            g->esp = sp0 - 0x1cu;
            cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, arg1);
        }
    }
L_101e688e: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e6780(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101e6780(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
