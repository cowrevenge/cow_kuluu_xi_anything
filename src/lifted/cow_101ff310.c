/* f_0x101ff310 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101ff310(Guest* g)
{
    uint32_t eax;
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
    uint32_t t16;
    uint32_t t17;
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
    const uint32_t in_edi = g->edi;

    if (rd32(self + 0x1cu) == 0u)
    {
        eax = rd32(self + 0x1cu);
        goto L_101ff3d1;
    }
    eax = rd32(self + 0x1cu);
    if (rd16(self + 0x14u) == 2u)
    {
        eax = (eax & 0xffff0000u) | rd16(self + 0x14u);
        edi = (in_edi & 0xffff0000u) | rd16(self + 0x16u);
        goto L_101ff333;
    }
    eax = (eax & 0xffff0000u) | rd16(self + 0x14u);
    edi = (in_edi & 0xffff0000u) | rd16(self + 0x16u);
    if ((uint16_t)eax != 7u)
    {
        edx = in_edx;
        goto L_101ff361;
    }
L_101ff333: ;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x22u);
    t2 = g->edx;
    t3 = (uint32_t)(int16_t)rd16(self + 0x18u);
    g->eax = t3;
    g->ecx = (uint32_t)(int16_t)edi;
    g->edx = t2;
    g->esp = sp0 - 0x14u;
    t4 = cow_cdecl(g, COW_IMG(0x10129f00u), 5, (uint32_t)(int16_t)edi, t3, t1, 0u, 0x804060a0u);
    t5 = g->ecx;
    t6 = g->edx;
    g->edx = t6;
    g->esp = sp0 - 0x28u;
    t7 = cow_thiscall_cdecl(g, COW_IMG(0x101ca4e0u), t5, 1, t1);
    t8 = g->edx;
    eax = t7;
    edx = t8;
    edi = edi + t7;
L_101ff361: ;
    g->eax = eax;
    g->esp = sp0 - 8u;
    t9 = cow_thiscall(g, COW_IMG(0x1015ec50u), COW_IMG(0x10621838u), 1, COW_IMG(0x103798e0u));
    if ((uint8_t)t9 == 0u)
    {
        eax = (uint32_t)(int16_t)rd16(rd32(COW_IMG(0x1062193cu)) + 0x32u);
        ecx = (uint32_t)(int16_t)rd16(self + 0x18u);
        edx = rd32(COW_IMG(0x1062193cu));
        edi = (uint32_t)(int16_t)edi;
        eax = eax - 0x14u;
    }
    else
    {
        eax = (uint32_t)(int16_t)rd16(rd32(COW_IMG(0x1062193cu)) + 0x32u);
        ecx = (uint32_t)(int16_t)rd16(self + 0x18u);
        edx = rd32(COW_IMG(0x1062193cu));
        edi = (uint32_t)(int16_t)edi;
        eax = eax - 0x64u;
    }
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t10 = cow_call_regs(g, COW_IMG(0x101c6060u), eax, rd32(self + 0x1cu), g->edx, 1, 0);
    t11 = g->edx;
    g->edx = t11;
    g->esp = sp0 - 0x1cu;
    t12 = cow_call_regs(g, COW_IMG(0x101c6020u), t10, rd32(self + 0x1cu), g->edx, 1, 0);
    t13 = g->edx;
    g->edx = t13;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x101c60e0u), rd32(self + 0x1cu), 6, t12, t10, edi, ecx, eax, 1u);
    t14 = g->edx;
    t15 = rd16(self + 0x18u);
    t16 = rd32(self + 0x1cu);
    wr32(t16 + 0x6a8u, edi);
    t17 = (uint32_t)(int16_t)t15 - 0x88u;
    wr32(t16 + 0x6acu, t17);
    g->esp = sp0;
    g->edx = t14;
    return cow_tailcall(g, COW_IMG(0x101c6800u), t17, rd32(self + 0x1cu), t14);
L_101ff3d1: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ff310(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101ff310(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
