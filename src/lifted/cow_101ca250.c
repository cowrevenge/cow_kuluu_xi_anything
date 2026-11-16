/* f_0x101ca250 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=6 */
uint32_t cow_fn_101ca250(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t loc_104;
    uint32_t loc_108;
    uint32_t loc_10c;
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
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 332u);

    wr32(sp0 - 0x114u, in_ebx);
    wr32(sp0 - 0x118u, in_esi);
    wr32(sp0 - 0x11cu, in_edi);
    if (arg4 != 0u) goto L_101ca273;
    return (uint32_t)(int16_t)arg2;
L_101ca273: ;
    if ((uint8_t)arg6 != 0u)
    {
        eax = arg4;
        ecx = (self & 0xffffff00u) | (uint8_t)arg6;
L_101ca291: ;
        t1 = rd8(eax);
        wr8(eax + sp0 - arg4 - 0x100u, (uint8_t)t1);
        if ((uint8_t)t1 != 0u)
        {
            eax = eax + 1u;
            ecx = (ecx & 0xffffff00u) | t1;
            goto L_101ca291;
        }
        ecx = (ecx & 0xffffff00u) | t1;
        wr32(sp0 - 0x120u, sp0 - 0x100u);
        g->esp = sp0 - 0x11cu;
        cow_call_regs(g, COW_IMG(0x101ba200u), sp0 - 0x100u, g->ecx, g->edx, 1, 1, sp0 - 0x100u);
        wr32(sp0 - 0x10cu, sp0 - 0x100u);
        eax = sp0 - 0x100u;
        ecx = sp0 - 0x100u;
        edi = sp0 - 0x100u;
        loc_10c = sp0 - 0x100u;
    }
    else
    {
        wr32(sp0 - 0x10cu, arg4);
        eax = arg4;
        ecx = (self & 0xffffff00u) | (uint8_t)arg6;
        edi = arg4;
        loc_10c = arg4;
    }
    wr32(sp0 - 0x108u, eax);
    if (rd8(eax) == 0u)
    {
        ebx = 0x10u;
        loc_108 = eax;
        goto L_101ca2f0;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax);
    loc_108 = eax;
    ebx = 0x10u;
L_101ca2ca: ;
    wr32(sp0 - 0x120u, sp0 - 0x108u);
    g->ecx = ecx;
    g->edx = sp0 - 0x108u;
    g->esp = sp0 - 0x114u;
    t2 = cow_cdecl(g, COW_IMG(0x1011ce80u), 3, sp0 - 0x108u, in_edi, in_esi);
    t3 = g->ecx;
    t4 = g->edx;
    wr32(sp0 - 0x124u, t2);
    g->ecx = t3;
    g->esp = sp0 - 0x120u;
    t5 = cow_cdecl(g, COW_IMG(0x101ca390u), 1, t2);
    t6 = g->ecx;
    wr32(sp0 - 0x104u, t5);
    if ((int32_t)(ebx + t5) > (int16_t)arg1)
    {
        eax = t5;
        ebx = ebx + t5;
        loc_104 = t5;
        goto L_101ca327;
    }
    ecx = t6;
    ebx = ebx + t5;
    if (rd8(rd32(sp0 - 0x108u)) != 0u)
    {
        edi = rd32(sp0 - 0x108u);
        goto L_101ca2ca;
    }
L_101ca2f0: ;
    wr32(sp0 - 0x120u, arg5);
    wr32(sp0 - 0x124u, 0u);
    wr32(sp0 - 0x128u, loc_10c);
    wr32(sp0 - 0x12cu, (uint32_t)(int16_t)arg3);
    wr32(sp0 - 0x130u, (uint32_t)(int16_t)arg2);
    g->esp = sp0 - 0x104u;
    cow_cdecl(g, COW_IMG(0x10129f00u), 11, (uint32_t)(int16_t)arg2, (uint32_t)(int16_t)arg3, loc_10c, 0u, arg5, in_edi, in_esi, in_ebx, rd32(sp0 - 0x110u), loc_10c, loc_108);
    return ebx + (uint32_t)(int16_t)arg2 - 8u;
L_101ca327: ;
    wr32(sp0 - 0x120u, in_ebp);
    wr32(sp0 - 0x124u, arg5);
    wr32(sp0 - 0x128u, 0u);
    t7 = rd32(sp0 - 0x10cu);
    wr32(sp0 - 0x12cu, t7);
    wr32(sp0 - 0x130u, (uint32_t)(int16_t)arg3);
    wr32(sp0 - 0x134u, (uint32_t)(int16_t)arg2);
    t8 = rd8(edi);
    t9 = rd32(sp0 - 0x110u);
    wr8(edi, 0u);
    g->eax = (eax & 0xffffff00u) | t8;
    g->esp = sp0 - 0x108u;
    t10 = cow_cdecl(g, COW_IMG(0x10129f00u), 11, (uint32_t)(int16_t)arg2, (uint32_t)(int16_t)arg3, t7, 0u, arg5, in_ebp, rd32(sp0 - 0x11cu), rd32(sp0 - 0x118u), rd32(sp0 - 0x114u), (t9 & 0xffffffu) | t8 << 0x18u, rd32(sp0 - 0x10cu));
    wr8(edi, rd8(sp0 - 0x10du));
    wr32(sp0 - 0x138u, arg5);
    wr32(sp0 - 0x13cu, 0u);
    wr32(sp0 - 0x140u, COW_IMG(0x1036c9a4u));
    wr32(sp0 - 0x144u, (uint32_t)(int16_t)arg3);
    t11 = ebx + (uint32_t)(int16_t)arg2 - rd32(sp0 - 0x104u) - 0x10u;
    wr32(sp0 - 0x148u, t11);
    g->esp = sp0 - 0x11cu;
    cow_cdecl(g, COW_IMG(0x10129f00u), 11, t11, (uint32_t)(int16_t)arg3, COW_IMG(0x1036c9a4u), 0u, arg5, (uint32_t)(int16_t)arg2, (uint32_t)(int16_t)arg3, rd32(sp0 - 0x12cu), 0u, arg5, in_ebp);
    g->ebx = rd32(sp0 - 0x114u);
    g->esi = rd32(sp0 - 0x118u);
    g->edi = rd32(sp0 - 0x11cu);
    return ebx + (uint32_t)(int16_t)arg2;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ca250(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101ca250(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
