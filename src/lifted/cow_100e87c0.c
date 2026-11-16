/* f_0x100e87c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100e87c0(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebp;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 192u);

    wr32(sp0 - 0x9cu, in_ebx);
    wr32(sp0 - 0xa0u, in_ebp);
    wr32(sp0 - 0xa4u, in_esi);
    wr32(sp0 - 0xa8u, in_edi);
    t1 = rd16(arg3) >> 9u;
    wr32(sp0 - 0xacu, t1);
    wr32(sp0 - 0xb0u, 6u);
    g->eax = t1;
    g->esp = sp0 - 0xa8u;
    t2 = cow_cdecl(g, COW_IMG(0x100dddb0u), 2, 6u, t1);
    wr32(sp0 - 0xb4u, t2);
    wr32(sp0 - 0xb8u, arg3 + 8u);
    wr32(sp0 - 0xbcu, sp0 - 0x98u);
    g->edx = sp0 - 0x98u;
    g->esp = sp0 - 0xb0u;
    cow_call_regs(g, COW_IMG(0x10312090u), t2, g->ecx, g->edx, 1, 3, sp0 - 0x98u, arg3 + 8u, t2);
    t3 = g->edx;
    t4 = rd32(COW_IMG(0x104ca3f0u));
    wr8(sp0 + t2 - 0x98u, 0u);
    if (t4 == 0u)
    {
        eax = t4;
        edx = t3;
        ebx = in_ebx;
        goto L_100e8876;
    }
    eax = t4;
    edx = t3;
    if (rd8(sp0 - 0x98u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x98u);
        ebx = in_ebx;
        goto L_100e8876;
    }
    t5 = rd32(arg3 + 4u);
    wr32(arg1 + 0x40e1cu, t5);
    if (rd8(COW_IMG(0x10361e38u)) == 0u)
    {
        eax = (t5 & 0xffffff00u) | rd8(COW_IMG(0x10361e38u));
        ebx = 0u;
        goto L_100e8876;
    }
    eax = COW_IMG(0x10361e38u);
    ecx = arg1;
    ebx = 0u;
    ebp = COW_IMG(0x10361e38u);
L_100e882d: ;
    wr32(sp0 - 0xacu, eax);
    wr32(sp0 - 0xb0u, sp0 - 0x98u);
    g->ecx = ecx;
    g->esp = sp0 - 0x94u;
    t6 = cow_call_regs(g, COW_IMG(0x10311ef0u), eax, g->ecx, sp0 - 0x98u, 1, 7, sp0 - 0x98u, eax, in_edi, in_esi, in_ebp, in_ebx, rd32(sp0 - 0x98u));
    t7 = g->ecx;
    if (t6 == 0u)
    {
        ecx = t7;
        edx = t6;
        goto L_100e8869;
    }
    edx = t6;
    esi = edx;
    edi = rd32(COW_IMG(0x104ca3f0u)) + 0x18c04u;
    ecx = 0x19u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t8 = rd32(COW_IMG(0x104ca3f0u));
    wr8(t8 + 0x18c67u, 0u);
    if (rd32(ebp + 0x64u) != 0u)
    {
        ecx = t8;
        goto L_100e8890;
    }
    ecx = t8;
L_100e8869: ;
    if (rd8(ebp + 0x68u) != 0u)
    {
        eax = ebp + 0x68u;
        ecx = (ecx & 0xffffff00u) | rd8(ebp + 0x68u);
        ebx = ebx + 1u;
        ebp = ebp + 0x68u;
        goto L_100e882d;
    }
    eax = ebp + 0x68u;
    ebx = ebx + 1u;
L_100e8876: ;
    wr32(sp0 - 0xacu, sp0 - 0x98u);
    g->ebx = ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xacu;
    t12 = cow_stdcall(g, COW_IMG(0x100e88c0u), 0);
    t13 = g->edx;
    g->ebx = in_ebx;
    g->edx = t13;
    return (t12 & 0xffffff00u) | 1u;
L_100e8890: ;
    edi = COW_IMG(0x10361e38u) + ebx * 0x68u;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = ebx * 0xdu >> 0x1du & 1u;
    pf = PARITY((uint8_t)(ebx * 0x68u));
    af = 0u;
    zf = ebx * 0x68u == 0u;
    sf = (int32_t)(ebx * 0x68u) < 0;
    of = ebx * 0x68u >> 0x1fu ^ (ebx * 0xdu >> 0x1du & 1u);
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t9 = edx + ~ecx - 1u;
    wr32(sp0 - 0xacu, t9);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xa8u;
    t10 = cow_thiscall_cdecl(g, rd32(COW_IMG(0x10361e9cu) + ebx * 0x68u), t9, 1, t9);
    t11 = g->edx;
    g->ebx = rd32(sp0 - 0x9cu);
    g->esi = rd32(sp0 - 0xa4u);
    g->edi = rd32(sp0 - 0xa8u);
    g->ebp = rd32(sp0 - 0xa0u);
    g->edx = t11;
    return t10;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e87c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100e87c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
