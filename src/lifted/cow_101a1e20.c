/* f_0x101a1e20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_101a1e20(Guest* g)
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
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 292u);

    wr32(sp0 - 0x104u, in_ebx);
    wr32(sp0 - 0x108u, in_ebp);
    wr32(sp0 - 0x10cu, in_esi);
    wr32(sp0 - 0x110u, in_edi);
    if (arg1 != 2u) goto L_101a1e7e;
    t1 = (uint32_t)((int32_t)(rd32(arg4 + 0x1db8u) - (uint32_t)((int32_t)rd32(arg4 + 0x1db8u) >> 0x1fu)) >> 1u) + 1u;
    wr32(sp0 - 0x114u, t1);
    t2 = rd32(arg4 + 0x1dc0u) + 1u;
    wr32(sp0 - 0x118u, t2);
    wr32(sp0 - 0x11cu, 0xc8u);
    wr32(sp0 - 0x120u, 7u);
    g->eax = t1;
    g->ecx = t2;
    g->edx = (uint32_t)((int32_t)rd32(arg4 + 0x1db8u) >> 0x1fu);
    t3 = rd32(arg4 + 0x1db8u);
    g->esp = sp0 - 0x118u;
    t4 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 7u, 0xc8u);
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0x11cu, t4);
    wr32(sp0 - 0x120u, sp0 - 0x100u);
    g->ebx = arg4;
    g->edx = t6;
    g->esp = sp0 - 0x10cu;
    t7 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, t4, rd32(sp0 - 0x118u), rd32(sp0 - 0x114u), in_edi);
    t8 = g->edx;
    wr32(sp0 - 0x114u, sp0 - 0x100u);
    g->ebx = arg4;
    g->edx = t8;
    g->esp = sp0 - 0x110u;
    t9 = cow_thiscall(g, COW_IMG(0x10129eb0u), rd32(COW_IMG(0x10578158u)), 1, sp0 - 0x100u);
    t10 = g->edx;
    eax = t9;
    edx = t10;
L_101a1e83: ;
    esi = arg4 + 4u;
    edi = 0x14u;
L_101a1e8b: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x110u;
    t11 = cow_thiscall(g, COW_IMG(0x101a17e0u), esi, 0);
    t12 = g->edx;
    if (edi != 1u)
    {
        eax = t11;
        edx = t12;
        esi = esi + 0x17cu;
        edi = edi - 1u;
        goto L_101a1e8b;
    }
    eax = t11;
    if (rd8(arg4 + 0x235fu) != 0u) goto L_101a1f9d;
    wr32(sp0 - 0x114u, COW_IMG(0x103d3c84u));
    t13 = (uint32_t)((int32_t)(rd32(arg4 + 0x1dbcu) - (uint32_t)((int32_t)rd32(arg4 + 0x1dbcu) >> 0x1fu)) >> 1u);
    wr32(sp0 - 0x118u, t13);
    g->esp = sp0 - 0x110u;
    cow_thiscall(g, COW_IMG(0x101a2660u), arg4, 2, t13, COW_IMG(0x103d3c84u));
    g->ebx = rd32(sp0 - 0x104u);
    g->esi = rd32(sp0 - 0x10cu);
    g->edi = rd32(sp0 - 0x110u);
    g->ebp = rd32(sp0 - 0x108u);
    return;
L_101a1e7e: ;
    if (arg1 != 1u) goto L_101a1ecc;
    eax = arg1;
    edx = in_edx;
    goto L_101a1e83;
L_101a1ecc: ;
    if (arg3 == 0x1ea0u) goto L_101a1f0f;
    if (arg3 == 0x1db0u) goto L_101a1f6c;
    eax = arg3;
    edx = arg4;
    esi = arg4 + 4u;
    edi = 0x14u;
L_101a1ef4: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x110u;
    t14 = cow_thiscall(g, COW_IMG(0x101a17e0u), esi, 0);
    t15 = g->edx;
    if (edi != 1u)
    {
        eax = t14;
        edx = t15;
        esi = esi + 0x17cu;
        edi = edi - 1u;
        goto L_101a1ef4;
    }
    g->ebx = rd32(sp0 - 0x104u);
    g->esi = rd32(sp0 - 0x10cu);
    g->edi = rd32(sp0 - 0x110u);
    g->ebp = rd32(sp0 - 0x108u);
    return;
L_101a1f0f: ;
    eax = arg2;
    edx = in_edx;
    ebx = 0x14u;
    esi = arg2 + 0x10u;
    edi = arg4 + 4u;
L_101a1f28: ;
    wr32(sp0 - 0x114u, esi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x110u;
    t17 = cow_thiscall(g, COW_IMG(0x101a1790u), edi, 1, esi);
    t18 = g->edx;
    if (ebx != 1u)
    {
        eax = t17;
        edx = t18;
        ebx = ebx - 1u;
        esi = esi + 0x188u;
        edi = edi + 0x17cu;
        goto L_101a1f28;
    }
    eax = t17;
    if (rd8(arg4 + 0x235fu) != 0u) goto L_101a1f9d;
    wr32(sp0 - 0x114u, COW_IMG(0x103d3c84u));
    t19 = (uint32_t)((int32_t)(rd32(arg4 + 0x1dbcu) - (uint32_t)((int32_t)rd32(arg4 + 0x1dbcu) >> 0x1fu)) >> 1u);
    wr32(sp0 - 0x118u, t19);
    g->esp = sp0 - 0x110u;
    cow_thiscall(g, COW_IMG(0x101a2660u), arg4, 2, t19, COW_IMG(0x103d3c84u));
    g->ebx = rd32(sp0 - 0x104u);
    g->esi = rd32(sp0 - 0x10cu);
    g->edi = rd32(sp0 - 0x110u);
    g->ebp = rd32(sp0 - 0x108u);
    return;
L_101a1f6c: ;
    esi = arg2;
    edi = arg4 + 4u;
    ecx = 0x76cu;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    edx = in_edx;
    esi = arg4 + 4u;
    edi = 0x14u;
L_101a1f8d: ;
    g->esp = sp0 - 0x110u;
    cow_fastcall(g, COW_IMG(0x101a1840u), esi, edx, 0);
    t16 = g->edx;
    if (edi != 1u)
    {
        edx = t16;
        esi = esi + 0x17cu;
        edi = edi - 1u;
        goto L_101a1f8d;
    }
L_101a1f9d: ;
    g->ebx = rd32(sp0 - 0x104u);
    g->esi = rd32(sp0 - 0x10cu);
    g->edi = rd32(sp0 - 0x110u);
    g->ebp = rd32(sp0 - 0x108u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a1e20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101a1e20(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
