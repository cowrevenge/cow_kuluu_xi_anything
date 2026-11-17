/* f_0x101b3e20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101b3e20(Guest* g)
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
        goto L_101b3ecc;
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
    g->ecx = t9;
    g->edx = t8;
    t10 = rd32(COW_IMG(0x103d3c64u));
    t11 = cow_stdcall(g, COW_IMG(0x101aff60u), 2, t9, t5);
    t12 = g->ecx;
    t13 = g->edx;
    if (t7 != 0u)
    {
        eax = t11;
        ecx = t12;
        edi = t7;
        goto L_101b3e88;
    }
    edx = t13;
    g->esi = rd32(sp0 - 0x10cu);
    g->edi = rd32(sp0 - 0x110u);
    g->ebp = rd32(sp0 - 0x108u);
    g->edx = edx;
    return 0u;
L_101b3e88: ;
    wr32(sp0 - 0x114u, in_ebx);
    wr32(sp0 - 0x104u, sp0 - 0x100u);
    if (rd8(sp0 - 0x100u) == 0u)
    {
        ebx = 0u;
    }
    else
    {
        ebx = 0u;
        esi = edi + self + 0xef23u;
L_101b3ea2: ;
        wr32(sp0 - 0x118u, sp0 - 0x104u);
        wr32(sp0 - 0x11cu, esi);
        g->eax = sp0 - 0x104u;
        g->esp = sp0 - 0x10cu;
        t14 = cow_thiscall_cdecl(g, COW_IMG(0x101243b0u), ecx, 4, esi, sp0 - 0x104u, in_ebx, rd32(sp0 - 0x110u));
        if (rd8(sp0 - 0x100u) != 0u)
        {
            ecx = (uint32_t)(int16_t)t14;
            ebx = ebx + (uint32_t)(int16_t)t14;
            goto L_101b3ea2;
        }
        ebx = ebx + (uint32_t)(int16_t)t14;
    }
    g->esi = rd32(sp0 - 0x10cu);
    g->edi = rd32(sp0 - 0x110u);
    g->ebp = rd32(sp0 - 0x108u);
    g->edx = sp0 - 0x100u;
    return ebx;
L_101b3ecc: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x110u;
    t15 = cow_thiscall(g, COW_IMG(0x101b71f0u), self, 0);
    t16 = g->edx;
    g->edx = t16;
    return t15;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101b3e20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101b3e20(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
