/* f_0x101c72e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101c72e0(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 48u);

    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    if (rd32(self + 0xcu) == 0u)
    {
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 0xcu);
        g->edx = in_edx;
        g->esp = sp0 - 0x18u;
        cow_thiscall(g, COW_IMG(0x101c7220u), self, 0);
        t1 = g->edx;
        edx = t1;
    }
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, 0xcu);
    wr32(sp0 - 0x28u, sp0 - 0xcu);
    wr32(sp0 - 0x2cu, arg1);
    g->eax = sp0 - 0xcu;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t2 = cow_thiscall(g, COW_IMG(0x101c4790u), rd32(COW_IMG(0x10662dccu)), 5, arg1, sp0 - 0xcu, 0xcu, 0u, 0u);
    t3 = g->edx;
    if ((int32_t)t2 >= 0)
    {
        edx = t3;
        goto L_101c7321;
    }
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    return 3u;
L_101c7321: ;
    if (rd32(sp0 - 0xcu) == 0x5849424du) goto L_101c7339;
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    return 1u;
L_101c7339: ;
    t4 = (uint16_t)rd32(sp0 - 6u);
    t5 = rd32(sp0 - 8u);
    wr32(self + 8u, t4);
    wr32(self + 4u, (uint16_t)t5);
    t6 = t4 * (uint16_t)t5 * 4u;
    wr32(sp0 - 0x1cu, t6);
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t7 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, t6, rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
    t8 = g->edx;
    wr32(self + 0xcu, t7);
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, 0xcu);
    wr32(sp0 - 0x24u, t6);
    wr32(sp0 - 0x28u, t7);
    wr32(sp0 - 0x2cu, arg1);
    g->edx = t8;
    g->esp = sp0 - 0x18u;
    t9 = cow_thiscall(g, COW_IMG(0x101c4790u), rd32(COW_IMG(0x10662dccu)), 5, arg1, t7, t6, 0xcu, 0u);
    t10 = g->edx;
    if ((int32_t)t9 >= 0)
    {
        eax = t9;
        edx = t10;
        edi = t6;
        goto L_101c7393;
    }
    eax = t9;
    edx = t10;
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, COW_IMG(0x101c7220u), self, 0);
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    return 3u;
L_101c7393: ;
    wr32(sp0 - 0x1cu, edi);
    t11 = rd32(self + 0xcu);
    wr32(sp0 - 0x20u, t11);
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t12 = cow_call_regs(g, COW_IMG(0x101c8c50u), eax, g->ecx, g->edx, 1, 4, t11, edi, rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
    t13 = g->edx;
    if (rd32(sp0 - 4u) != t12)
    {
        eax = t12;
        edx = t13;
        goto L_101c73b3;
    }
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    return 0u;
L_101c73b3: ;
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, COW_IMG(0x101c7220u), self, 0);
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    return 2u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c72e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101c72e0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
