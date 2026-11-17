/* f_0x101b3d20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101b3d20(Guest* g)
{
    uint32_t eax;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 292u);

    wr32(sp0 - 0x108u, in_ebp);
    wr32(sp0 - 0x10cu, in_esi);
    wr32(sp0 - 0x110u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x110u;
    t1 = cow_stdcall(g, COW_IMG(0x101b41a0u), 0);
    t2 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        eax = t1;
        edx = t2;
        goto L_101b3e02;
    }
    edx = t2;
    edi = sp0 - 0x100u;
    eax = 0u;
    ecx = 0x40u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t3 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x114u, t3);
    g->eax = rd32(COW_IMG(0x103d3c64u));
    g->ecx = t3;
    t4 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x110u;
    t5 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t3);
    t6 = g->ecx;
    wr32(sp0 - 0x114u, 0x100u);
    wr32(sp0 - 0x118u, sp0 - 0x100u);
    wr32(sp0 - 0x11cu, 8u);
    wr32(sp0 - 0x120u, t5);
    g->edx = sp0 - 0x100u;
    t7 = cow_stdcall(g, COW_IMG(0x102bc888u), 4, t5, 8u, sp0 - 0x100u, 0x100u);
    t8 = g->edx;
    wr32(sp0 - 0x114u, t5);
    t9 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x118u, t9);
    g->eax = rd32(COW_IMG(0x103d3c64u));
    t10 = rd32(COW_IMG(0x103d3c64u));
    t11 = cow_stdcall(g, COW_IMG(0x101aff60u), 2, t9, t5);
    if (t7 != 0u)
    {
        eax = t11;
        goto L_101b3d99;
    }
    edi = self + 0xef23u;
    eax = 0u;
    ecx = 0x40u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->esi = rd32(sp0 - 0x10cu);
    g->edi = rd32(sp0 - 0x110u);
    g->ebp = rd32(sp0 - 0x108u);
    g->edx = self + 0xef23u;
    return self + 0xef23u;
L_101b3d99: ;
    wr32(sp0 - 0x104u, sp0 - 0x100u);
    if (rd8(sp0 - 0x100u) == 0u)
    {
        edx = sp0 - 0x100u;
        esi = 0u;
        goto L_101b3dea;
    }
    edx = sp0 - 0x100u;
    esi = 0u;
L_101b3dab: ;
    wr32(sp0 - 0x114u, sp0 - 0x104u);
    t12 = esi + self + 0xef23u;
    wr32(sp0 - 0x118u, t12);
    g->eax = sp0 - 0x104u;
    g->edx = edx;
    g->esp = sp0 - 0x108u;
    t13 = cow_thiscall_cdecl(g, COW_IMG(0x101243b0u), t12, 4, t12, sp0 - 0x104u, rd32(sp0 - 0x110u), rd32(sp0 - 0x10cu));
    t14 = g->edx;
    if ((int16_t)t13 <= 0)
    {
        ecx = (uint32_t)(int16_t)t13;
        edx = t14;
    }
    else
    {
        ecx = (uint32_t)(int16_t)t13;
        edx = t14;
        eax = 0u;
        edi = esi + self + 0xf12cu;
L_101b3dd0: ;
        t15 = rd8(esi + self + 0xf12cu);
        wr8(eax + edi, (uint8_t)t15);
        if ((int32_t)(eax + 1u) < (int32_t)ecx)
        {
            eax = eax + 1u;
            edx = (edx & 0xffffff00u) | t15;
            goto L_101b3dd0;
        }
        edx = (edx & 0xffffff00u) | t15;
    }
    if (rd8(sp0 - 0x100u) != 0u)
    {
        esi = ecx + esi;
        goto L_101b3dab;
    }
    esi = ecx + esi;
L_101b3dea: ;
    wr8(esi + self + 0xef23u, 0u);
    g->esi = rd32(sp0 - 0x10cu);
    g->edi = rd32(sp0 - 0x110u);
    g->ebp = rd32(sp0 - 0x108u);
    g->edx = edx;
    return self + 0xef23u;
L_101b3e02: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x110u;
    t16 = cow_thiscall(g, COW_IMG(0x101b71e0u), self, 0);
    t17 = g->edx;
    g->edx = t17;
    return t16;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101b3d20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101b3d20(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
