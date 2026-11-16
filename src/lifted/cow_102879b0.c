/* f_0x102879b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_102879b0(Guest* g)
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
    uint32_t loc_4;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((int32_t)rd32(rd32(sp0 + 4u) + 0x58u) > 0)
    {
        eax = rd32(rd32(sp0 + 4u) + 0x58u);
        ecx = self;
        edx = in_edx;
        ebx = rd32(sp0 + 4u);
        esi = 0u;
        loc_4 = 0u;
        goto L_102879dd;
    }
    ecx = self;
    edx = in_edx;
    ebx = rd32(sp0 + 4u);
L_102879c6: ;
    if ((int32_t)rd32(ebx + 0x44u) <= 0)
    {
        eax = rd32(ebx + 0x44u);
        loc_4 = 0u;
        goto L_10287aae;
    }
    eax = rd32(ebx + 0x44u);
    esi = 0u;
    loc_4 = 0u;
L_10287a3e: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t8 = cow_cdecl(g, COW_IMG(0x10279890u), 2, ebx, esi);
    t9 = g->ecx;
    t10 = g->edx;
    wr32(sp0 + 4u, t8);
    g->esp = sp0 - 0x1cu;
    t11 = cow_cdecl(g, COW_IMG(0x10279bc0u), 3, ebx, 2u, esi);
    esi = t11;
    edi = COW_IMG(0x103b3d70u);
    ecx = 9u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (zf)
    {
        edx = 0u;
        goto L_10287a9e;
    }
    ebp = t11;
    if (rd32(rd32(sp0 + 4u)) != 0xb0001u)
    {
        eax = 0u;
        ecx = rd32(sp0 + 4u);
    }
    else
    {
        ecx = rd32(sp0 + 4u);
        if (rd32(rd32(ecx + 0x1cu) + 0x68u) == 0u)
        {
            eax = 0u;
            ecx = rd32(rd32(ecx + 0x1cu) + 0x68u);
        }
        else
        {
            ecx = rd32(rd32(ecx + 0x1cu) + 0x68u);
            eax = rd32(ecx + 0x64u);
        }
    }
    g->edx = arg3;
    g->esp = sp0 - 0x14u;
    t12 = cow_thiscall_cdecl(g, COW_IMG(0x10287ae0u), ecx, 5, arg2, ebp, 2u, eax, arg3);
    t13 = g->edx;
    if ((uint8_t)t12 == 0u)
    {
        eax = t12;
        edx = t13;
        goto L_10287ab6;
    }
    edx = t13;
L_10287a9e: ;
    if ((int32_t)(loc_4 + 1u) < (int32_t)rd32(ebx + 0x44u))
    {
        eax = loc_4 + 1u;
        ecx = rd32(ebx + 0x44u);
        loc_4 = loc_4 + 1u;
        goto L_10287a3a;
    }
    eax = loc_4 + 1u;
    loc_4 = loc_4 + 1u;
L_10287aae: ;
    return (eax & 0xffffff00u) | (uint8_t)(eax | 0xffu);
L_102879d9: ;
    esi = loc_4;
L_102879dd: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x102798b0u), 2, ebx, esi);
    t1 = g->ecx;
    t2 = g->edx;
    g->edx = t2;
    g->esp = sp0 - 0x1cu;
    t3 = cow_cdecl(g, COW_IMG(0x10279bc0u), 3, ebx, 3u, esi);
    t4 = g->edx;
    esi = t3;
    edi = COW_IMG(0x103b3d70u);
    ecx = 9u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (zf)
    {
        edx = t4;
        goto L_10287a1e;
    }
    ebp = t3;
    g->edx = arg2;
    g->esp = sp0 - 0x14u;
    t5 = cow_thiscall_cdecl(g, COW_IMG(0x10287ae0u), arg3, 5, arg2, ebp, 4u, 0u, arg3);
    t6 = g->ecx;
    t7 = g->edx;
    if ((uint8_t)t5 == 0u)
    {
        ecx = t6;
        edx = t7;
        goto L_10287a30;
    }
    edx = t7;
L_10287a1e: ;
    if ((int32_t)(loc_4 + 1u) < (int32_t)rd32(ebx + 0x58u))
    {
        eax = loc_4 + 1u;
        ecx = rd32(ebx + 0x58u);
        loc_4 = loc_4 + 1u;
        goto L_102879d9;
    }
    ecx = rd32(ebx + 0x58u);
    goto L_102879c6;
L_10287a30: ;
    eax = loc_4;
L_10287abb: ;
    g->eax = eax;
    g->esp = sp0 - 0x18u;
    t14 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b88fcu), ebp);
    return t14 & 0xffffff00u;
L_10287a3a: ;
    esi = loc_4;
    goto L_10287a3e;
L_10287ab6: ;
    ecx = loc_4;
    goto L_10287abb;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102879b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102879b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
