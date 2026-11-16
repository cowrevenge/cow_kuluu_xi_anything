/* f_0x101c3fe0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101c3fe0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
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
    cow_frame(g, sp0, 284u);

    wr32(sp0 - 0x104u, in_ebx);
    wr32(sp0 - 0x108u, in_esi);
    wr32(sp0 - 0x10cu, in_edi);
    wr32(sp0 - 0x110u, 0u);
    wr32(sp0 - 0x114u, arg1);
    g->edx = in_edx;
    t1 = rd32(COW_IMG(0x10329208u));
    g->esp = sp0 - 0x10cu;
    t2 = cow_thiscall(g, t1, self, 2, arg1, 0u);
    t3 = g->ecx;
    t4 = g->edx;
    if (t2 != 0u)
    {
        edx = t4;
        goto L_101c405e;
    }
    eax = t2;
    ecx = t3;
    edx = t4;
    edi = t1;
    g->eax = eax;
    g->edx = edx;
    t5 = rd32(COW_IMG(0x10329168u));
    g->esp = sp0 - 0x10cu;
    t6 = cow_thiscall(g, t5, ecx, 0);
    t7 = g->ecx;
    t8 = g->edx;
    if (t6 == 0xb7u)
    {
        edx = t8;
        goto L_101c405e;
    }
    ecx = t7;
    edx = t8;
    ebx = t5;
    wr32(sp0 - 0x110u, 0x100u);
    wr32(sp0 - 0x114u, arg1);
    wr32(sp0 - 0x118u, sp0 - 0x100u);
    g->edx = edx;
    g->esp = sp0 - 0x10cu;
    t9 = cow_call_regs(g, COW_IMG(0x10312090u), sp0 - 0x100u, g->ecx, g->edx, 1, 3, sp0 - 0x100u, arg1, 0x100u);
    t10 = g->edx;
    t11 = rd8(sp0 - 0x100u);
    wr8(sp0 - 1u, 0u);
    if ((uint8_t)t11 == 0u)
    {
        edx = t10;
        goto L_101c405e;
    }
    eax = (t9 & 0xffffff00u) | t11;
    edx = t10;
    esi = sp0 - 0x100u;
L_101c4035: ;
    if (rd8(esi) != 0x2fu) goto L_101c4056;
    wr32(sp0 - 0x110u, 0u);
    wr32(sp0 - 0x114u, sp0 - 0x100u);
    wr8(esi, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10cu;
    t12 = cow_thiscall(g, edi, sp0 - 0x100u, 2, sp0 - 0x100u, 0u);
    t13 = g->ecx;
    t14 = g->edx;
    if (t12 != 0u)
    {
        eax = t12;
        edx = t14;
        goto L_101c4053;
    }
    eax = t12;
    ecx = t13;
    edx = t14;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10cu;
    t15 = cow_thiscall(g, ebx, ecx, 0);
    t16 = g->edx;
    if (t15 != 0xb7u)
    {
        eax = t15;
        edx = t16;
        goto L_101c406f;
    }
    eax = t15;
    edx = t16;
L_101c4053: ;
    wr8(esi, 0x2fu);
L_101c4056: ;
    if (rd8(esi + 1u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(esi + 1u);
        esi = esi + 1u;
        goto L_101c4035;
    }
L_101c405e: ;
    g->edx = edx;
    return 1u;
L_101c406f: ;
    g->ebx = rd32(sp0 - 0x104u);
    g->esi = rd32(sp0 - 0x108u);
    g->edi = rd32(sp0 - 0x10cu);
    g->edx = edx;
    return 0xffffffffu;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c3fe0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101c3fe0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
