/* f_0x100dd590 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=6 */
uint32_t cow_fn_100dd590(Guest* g)
{
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 144u);

    wr32(sp0 - 0x6cu, in_ebx);
    wr32(sp0 - 0x70u, in_ebp);
    wr32(sp0 - 0x74u, in_esi);
    wr32(sp0 - 0x78u, in_edi);
    esi = arg4;
    edi = arg1;
    ecx = 7u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    if (arg3 != 0u) goto L_100dd5dd;
    if (arg5 == 0x1cu) goto L_100dd5dd;
    esi = arg4 + 0x1cu;
    edi = arg1 + 0x1cu;
    ecx = (arg5 - 0x1cu) >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = arg5 - 0x1cu & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    ebx = arg5 - 0x1cu;
L_100dd638: ;
    if (arg2 >= ebx + 0x2cu)
    {
        edx = ebx + 0x2cu;
        goto L_100dd651;
    }
    return 0xffffffffu;
L_100dd5dd: ;
    wr32(sp0 - 0x7cu, arg6);
    wr32(sp0 - 0x80u, arg2 - 0x2cu);
    wr32(sp0 - 0x84u, arg1 + 0x1cu);
    wr32(sp0 - 0x88u, arg5 - 0x1cu);
    wr32(sp0 - 0x8cu, arg4 + 0x1cu);
    g->edx = in_edx;
    g->esp = sp0 - 0x68u;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x100df7c0u), arg3, 9, arg4 + 0x1cu, arg5 - 0x1cu, arg1 + 0x1cu, arg2 - 0x2cu, arg6, in_edi, in_esi, in_ebp, in_ebx);
    t2 = g->edx;
    if ((int32_t)t1 >= 0)
    {
        ecx = t1;
        goto L_100dd624;
    }
    edx = t2;
    wr32(sp0 - 0x7cu, arg6);
    wr32(sp0 - 0x80u, arg5 - 0x1cu);
    wr32(sp0 - 0x84u, arg4 + 0x1cu);
    g->esp = sp0 - 0x78u;
    t3 = cow_cdecl(g, COW_IMG(0x100df780u), 3, arg4 + 0x1cu, arg5 - 0x1cu, arg6);
    g->ebx = rd32(sp0 - 0x6cu);
    g->esi = rd32(sp0 - 0x74u);
    g->edi = rd32(sp0 - 0x78u);
    g->ebp = rd32(sp0 - 0x70u);
    return 0xffffffffu;
L_100dd624: ;
    t4 = ecx + ((uint32_t)((int32_t)(ecx + 7u) >> 0x1fu) & 7u) + 7u;
    wr32(arg1 + (uint32_t)((int32_t)t4 >> 3u) + 0x1cu, ecx);
    ebx = (uint32_t)((int32_t)t4 >> 3u) + 4u;
    goto L_100dd638;
L_100dd651: ;
    wr32(sp0 - 0x7cu, sp0 - 0x68u);
    g->eax = sp0 - 0x68u;
    g->edx = edx;
    g->esp = sp0 - 0x78u;
    t5 = cow_cdecl(g, COW_IMG(0x100dde90u), 1, sp0 - 0x68u);
    t6 = g->edx;
    wr32(sp0 - 0x80u, ebx);
    wr32(sp0 - 0x84u, arg1 + 0x1cu);
    wr32(sp0 - 0x88u, sp0 - 0x68u);
    g->ecx = sp0 - 0x68u;
    g->esp = sp0 - 0x7cu;
    t7 = cow_cdecl(g, COW_IMG(0x100ddec0u), 3, sp0 - 0x68u, arg1 + 0x1cu, ebx);
    t8 = g->ecx;
    wr32(sp0 - 0x8cu, sp0 - 0x68u);
    g->esp = sp0 - 0x88u;
    cow_cdecl(g, COW_IMG(0x100ddf60u), 1, sp0 - 0x68u);
    t9 = rd32(sp0 - 0x10u);
    wr32(arg1 + ebx + 0x1cu, t9);
    t10 = rd32(sp0 - 0xcu);
    wr32(arg1 + ebx + 0x20u, t10);
    t11 = rd32(sp0 - 8u);
    wr32(arg1 + ebx + 0x24u, t11);
    t12 = rd32(sp0 - 4u);
    wr32(arg1 + ebx + 0x28u, t12);
    if (arg3 == 0u)
    {
        ebx = ebx + 0x10u;
    }
    else
    {
        ecx = t11;
        edx = t12;
        ebx = ebx + 0x10u;
        wr32(sp0 - 0x7cu, ebx);
        wr32(sp0 - 0x80u, arg1 + 0x1cu);
        wr32(sp0 - 0x84u, arg3);
        g->esp = sp0 - 0x70u;
        cow_cdecl(g, COW_IMG(0x100dca00u), 5, arg3, arg1 + 0x1cu, ebx, rd32(sp0 - 0x78u), rd32(sp0 - 0x74u));
    }
    g->ebx = rd32(sp0 - 0x6cu);
    g->esi = rd32(sp0 - 0x74u);
    g->edi = rd32(sp0 - 0x78u);
    g->ebp = rd32(sp0 - 0x70u);
    return ebx + 0x1cu;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100dd590(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100dd590(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
