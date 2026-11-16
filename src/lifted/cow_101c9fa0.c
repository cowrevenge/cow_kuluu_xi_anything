/* f_0x101c9fa0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=7 */
uint32_t cow_fn_101c9fa0(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 152u);

    wr32(sp0 - 0x5cu, in_ebx);
    wr32(sp0 - 0x60u, in_ebp);
    wr32(sp0 - 0x64u, in_esi);
    wr32(sp0 - 0x68u, in_edi);
    wr32(sp0 - 0x6cu, 0x18u);
    edi = sp0 - 0x58u;
    eax = 0u;
    ecx = 0x16u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x70u, arg4);
    wr32(sp0 - 0x74u, sp0 - 0x58u);
    g->ecx = sp0 - 0x58u;
    g->esp = sp0 - 0x68u;
    cow_call_regs(g, COW_IMG(0x10312090u), arg4, g->ecx, g->edx, 1, 3, sp0 - 0x58u, arg4, 0x18u);
    t1 = g->ecx;
    wr32(sp0 - 0x78u, sp0 - 0x58u);
    wr32(sp0 - 0x7cu, arg1);
    g->ecx = t1;
    g->edx = sp0 - 0x58u;
    g->esp = sp0 - 0x6cu;
    t2 = cow_cdecl(g, COW_IMG(0x101c96d0u), 4, arg1, sp0 - 0x58u, sp0 - 0x58u, arg4);
    t3 = g->ecx;
    t4 = g->edx;
    edi = sp0 - 0x58u;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = sp0 - 0x68u < sp0 - 0x7cu;
    pf = PARITY((uint8_t)(sp0 - 0x68u));
    af = (sp0 - 0x7cu ^ 0x14u ^ sp0 - 0x68u) >> 4u & 1u;
    zf = sp0 == 0x68u;
    sf = (int32_t)(sp0 - 0x68u) < 0;
    of = ((sp0 - 0x7cu ^ sp0 - 0x68u) & (sp0 - 0x68u ^ 0x14u)) >> 0x1fu;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    if ((int32_t)t2 < (int32_t)(~ecx - 1u))
    {
        esi = t2;
        goto L_101ca03d;
    }
    ecx = ~ecx - 1u;
    edx = t4;
    esi = t2;
    wr32(sp0 - 0x6cu, COW_IMG(0x1036bf64u));
    wr32(sp0 - 0x70u, sp0 - 0x58u);
    g->esp = sp0 - 0x54u;
    t5 = cow_call_regs(g, COW_IMG(0x10311ef0u), sp0 - 0x58u, g->ecx, edx, 1, 7, sp0 - 0x58u, COW_IMG(0x1036bf64u), in_edi, in_esi, in_ebp, in_ebx, rd32(sp0 - 0x58u));
    if (t5 != 0u) goto L_101ca03d;
    eax = t5;
    wr32(sp0 - 0x6cu, arg5);
    wr32(sp0 - 0x70u, sp0 - 0x58u);
    t6 = arg3 + (-((uint8_t)arg6 != 0u) & 6u);
    wr32(sp0 - 0x74u, t6);
    wr32(sp0 - 0x78u, arg2);
    g->esp = sp0 - 0x54u;
    cow_cdecl(g, COW_IMG(0x101c9780u), 9, arg2, t6, sp0 - 0x58u, arg5, rd32(sp0 - 0x68u), rd32(sp0 - 0x64u), rd32(sp0 - 0x60u), rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u));
    g->ebx = rd32(sp0 - 0x5cu);
    g->esi = rd32(sp0 - 0x64u);
    g->edi = rd32(sp0 - 0x68u);
    g->ebp = rd32(sp0 - 0x60u);
    return (uint32_t)(int16_t)arg2;
L_101ca03d: ;
    t7 = esi + ((uint32_t)((int32_t)esi >> 0x1fu) & 3u);
    if ((int32_t)esi <= 0)
    {
        ecx = 0u;
        ebx = esi;
        edi = (uint32_t)((int32_t)t7 >> 2u);
        goto L_101ca067;
    }
    eax = t7;
    ecx = 0u;
    edx = (uint32_t)((int32_t)esi >> 0x1fu) & 3u;
    ebx = esi;
    edi = (uint32_t)((int32_t)t7 >> 2u);
L_101ca052: ;
    if (rd8(ecx + sp0 - 0x58u) == 0x3au) goto L_101ca060;
    if ((int32_t)(ecx + 1u) < (int32_t)esi)
    {
        ecx = ecx + 1u;
        goto L_101ca052;
    }
    ecx = ecx + 1u;
L_101ca067: ;
    if ((int32_t)(esi + 1u) < (int32_t)edi)
    {
        eax = esi + 1u;
        edx = esi + 1u;
        goto L_101ca09d;
    }
    eax = esi + 1u;
    edx = esi + 1u;
L_101ca070: ;
    if (rd8(edx + sp0 - 0x58u) == 0x20u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(edx + sp0 - 0x58u);
        goto L_101ca094;
    }
    ecx = (ecx & 0xffffff00u) | rd8(edx + sp0 - 0x58u);
    if ((uint8_t)ecx == 0x2du) goto L_101ca094;
    if ((uint8_t)ecx == 0x40u) goto L_101ca094;
    if ((uint8_t)ecx == 0x27u) goto L_101ca094;
    if ((uint8_t)ecx == 0x3au) goto L_101ca094;
    if ((int32_t)(edx - 1u) >= (int32_t)edi)
    {
        edx = edx - 1u;
        goto L_101ca070;
    }
    edx = edx - 1u;
L_101ca09d: ;
    if ((uint8_t)arg7 == 0u) goto L_101ca0fc;
    eax = (eax & 0xffffff00u) | (uint8_t)arg7;
    wr32(sp0 - 0x6cu, arg5);
    wr32(sp0 - 0x70u, sp0 - 0x58u);
    wr32(sp0 - 0x74u, arg3);
    wr32(sp0 - 0x78u, arg2);
    t8 = rd8(ebx + sp0 - 0x58u);
    wr8(ebx + sp0 - 0x58u, 0u);
    g->esp = sp0 - 0x54u;
    cow_cdecl(g, COW_IMG(0x101c9780u), 9, arg2, arg3, sp0 - 0x58u, arg5, in_edi, in_esi, in_ebp, in_ebx, rd32(sp0 - 0x58u));
    wr32(sp0 - 0x7cu, 0u);
    wr32(sp0 - 0x80u, 0u);
    wr32(sp0 - 0x84u, arg5);
    t9 = ebx + sp0 - 0x58u;
    wr32(sp0 - 0x88u, t9);
    wr32(sp0 - 0x8cu, arg3 + 0xcu);
    wr32(sp0 - 0x90u, arg2 + 4u);
    wr32(sp0 - 0x94u, arg1 - 4u);
    wr8(t9, (uint8_t)t8);
    g->esp = sp0 - 0x78u;
    cow_cdecl(g, COW_IMG(0x101c9fa0u), 7, arg1 - 4u, arg2 + 4u, arg3 + 0xcu, t9, arg5, 0u, 0u);
    return (uint32_t)(int16_t)arg2;
L_101ca060: ;
    if (ecx + 1u != esi)
    {
        ebx = ecx + 1u;
        goto L_101ca09d;
    }
    ebx = ecx + 1u;
    goto L_101ca067;
L_101ca094: ;
    if ((int32_t)edx < (int32_t)eax)
    {
        ebx = edx + 1u;
    }
    else
    {
        ebx = edx;
    }
    goto L_101ca09d;
L_101ca0fc: ;
    t10 = ebx + sp0 - 0x58u;
    wr32(sp0 - 0x6cu, t10);
    wr32(sp0 - 0x70u, arg1 - 4u);
    g->ecx = ecx;
    g->esp = sp0 - 0x60u;
    t11 = cow_cdecl(g, COW_IMG(0x101c96d0u), 4, arg1 - 4u, t10, in_edi, in_esi);
    t12 = g->ecx;
    edi = t10;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = sp0 - 0x68u < sp0 - 0x70u;
    pf = PARITY((uint8_t)(sp0 - 0x68u));
    af = (sp0 - 0x70u ^ sp0 - 0x68u) >> 4u & 1u;
    zf = sp0 == 0x68u;
    sf = (int32_t)(sp0 - 0x68u) < 0;
    of = ((sp0 - 0x70u ^ sp0 - 0x68u) & (sp0 - 0x68u ^ 8u)) >> 0x1fu;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    if ((int32_t)(~ecx - 1u) <= (int32_t)t11)
    {
        esi = ebx;
    }
    wr32(sp0 - 0x6cu, arg5);
    wr32(sp0 - 0x70u, sp0 - 0x58u);
    wr32(sp0 - 0x74u, arg3);
    wr32(sp0 - 0x78u, arg2);
    t13 = rd8(esi + sp0 - 0x58u);
    wr8(esi + sp0 - 0x58u, 0u);
    g->esp = sp0 - 0x54u;
    cow_cdecl(g, COW_IMG(0x101c9780u), 9, arg2, arg3, sp0 - 0x58u, arg5, rd32(sp0 - 0x68u), rd32(sp0 - 0x64u), rd32(sp0 - 0x60u), rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u));
    wr32(sp0 - 0x7cu, arg5);
    t14 = esi + sp0 - 0x58u;
    wr32(sp0 - 0x80u, t14);
    wr32(sp0 - 0x84u, arg3 + 0xcu);
    wr32(sp0 - 0x88u, arg2 + 4u);
    wr32(sp0 - 0x8cu, arg1 - 4u);
    wr8(t14, (uint8_t)t13);
    g->esp = sp0 - 0x78u;
    cow_cdecl(g, COW_IMG(0x101c9d50u), 5, arg1 - 4u, arg2 + 4u, arg3 + 0xcu, t14, arg5);
    g->ebx = rd32(sp0 - 0x5cu);
    g->esi = rd32(sp0 - 0x64u);
    g->edi = rd32(sp0 - 0x68u);
    g->ebp = rd32(sp0 - 0x60u);
    return (uint32_t)(int16_t)arg2;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c9fa0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101c9fa0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
