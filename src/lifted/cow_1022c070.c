/* f_0x1022c070 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1022c070(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t of;
    uint32_t pf;
    uint32_t sf;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 2084u);

    wr32(sp0 - 0x808u, in_ebx);
    wr32(sp0 - 0x80cu, in_ebp);
    wr32(sp0 - 0x810u, in_esi);
    wr32(sp0 - 0x814u, in_edi);
    esi = self + 0x80u;
    edi = sp0 - 0x800u;
    ecx = 0x200u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    eax = in_eax;
    edx = in_edx;
    esi = 0u;
    edi = rd32(COW_IMG(0x10667a74u));
L_1022c097: ;
    if (rd16(esi * 2u + sp0 - 0x800u) == 0u)
    {
        eax = (eax & 0xffff0000u) | rd16(esi * 2u + sp0 - 0x800u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | rd16(esi * 2u + sp0 - 0x800u);
        if (rd16(edi + (uint16_t)eax * 0x64u) == 0u)
        {
            eax = edi + (uint16_t)eax * 0x64u;
        }
        else
        {
            eax = edi + (uint16_t)eax * 0x64u;
            if (arg2 == 0u) goto L_1022c0cd;
            if (arg2 >> (rd8(eax + 2u) & 0x1fu) & 1u)
            {
                ecx = (arg2 & 0xffffff00u) | rd8(eax + 2u);
                edx = arg2 >> (rd8(eax + 2u) & 0x1fu);
                goto L_1022c0e7;
            }
            edx = arg2 >> (rd8(eax + 2u) & 0x1fu);
L_1022c0cd: ;
            if (arg1 == 0u) goto L_1022c0e0;
            if ((uint32_t)(int16_t)rd16(eax + 2u) != arg1)
            {
                eax = (uint32_t)(int16_t)rd16(eax + 2u);
                ecx = arg1;
                goto L_1022c0e7;
            }
            eax = (uint32_t)(int16_t)rd16(eax + 2u);
L_1022c0e0: ;
            wr16(esi * 2u + sp0 - 0x800u, 0u);
            ecx = arg1;
        }
    }
L_1022c0e7: ;
    if ((int32_t)(esi + 1u) < 1024)
    {
        esi = esi + 1u;
        goto L_1022c097;
    }
    wr32(sp0 - 0x818u, 0x400u);
    wr32(sp0 - 0x81cu, self + 0x80u);
    wr32(sp0 - 0x820u, self);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x80cu;
    t1 = cow_cdecl(g, COW_IMG(0x1021e500u), 5, self, self + 0x80u, 0x400u, in_edi, in_esi);
    t2 = g->edx;
    wr32(self + 0x880u, 0u);
    g->esp = sp0 - 0x814u;
    cow_thiscall(g, COW_IMG(0x1022c030u), self, 0);
    edi = self + 0x80u;
    eax = 0u;
    ecx = 0x200u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    esi = 1u;
    edi = 0x64u;
L_1022c125: ;
    if ((int32_t)(esi & 0x80000007u) >= 0)
    {
        ecx = esi & 0x80000007u;
        pf = PARITY(esi & 7u);
        zf = (esi & 0x80000007u) == 0u;
        sf = (int32_t)(esi & 0x80000007u) < 0;
        of = 0u;
    }
    else
    {
        ecx = esi & 0x80000007u;
        pf = PARITY((uint8_t)((ecx - 1u | 0xfffffff8u) + 1u));
        zf = (ecx - 1u | 0xfffffff8u) + 1u == 0u;
        sf = (int32_t)((ecx - 1u | 0xfffffff8u) + 1u) < 0;
        of = (ecx - 1u | 0xfffffff8u) + 1u == 0x80000000u;
        ecx = (ecx - 1u | 0xfffffff8u) + 1u;
    }
    t3 = 1u << (ecx & 0x1fu);
    wr32(sp0 - 0x804u, t3);
    if ((rd8(self + (uint32_t)((int32_t)(esi + ((uint32_t)((int32_t)esi >> 0x1fu) & 7u)) >> 3u)) & (uint8_t)t3) == 0u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(self + (uint32_t)((int32_t)(esi + ((uint32_t)((int32_t)esi >> 0x1fu) & 7u)) >> 3u));
    }
    else
    {
        ecx = (ecx & 0xffffff00u) | rd8(self + (uint32_t)((int32_t)(esi + ((uint32_t)((int32_t)esi >> 0x1fu) & 7u)) >> 3u));
        if (rd16(edi + rd32(COW_IMG(0x10667a74u))) != 0u)
        {
            eax = rd32(COW_IMG(0x10667a74u));
            wr16(self + rd16(eax + edi + 0x3eu) * 2u + 0x80u, (uint16_t)esi);
        }
    }
    if ((int32_t)(edi + 0x64u) < 102400)
    {
        esi = esi + 1u;
        edi = edi + 0x64u;
        goto L_1022c125;
    }
    eax = self + 0x82u;
    edx = self + 0x80u;
    esi = 0x3ffu;
L_1022c189: ;
    if (rd16(eax) == 0u)
    {
        ecx = (ecx & 0xffff0000u) | rd16(eax);
    }
    else
    {
        ecx = (ecx & 0xffff0000u) | rd16(eax);
        wr16(edx, (uint16_t)ecx);
        wr16(eax, 0u);
        edx = edx + 2u;
    }
    if (esi != 1u)
    {
        eax = eax + 2u;
        esi = esi - 1u;
        goto L_1022c189;
    }
    eax = eax + 2u;
    esi = self + 0x80u;
    edi = 0x400u;
L_1022c1a9: ;
    if (rd16(esi) == 0u)
    {
        eax = (eax & 0xffff0000u) | rd16(esi);
    }
    else
    {
        eax = (eax & 0xffff0000u) | rd16(esi);
        if (rd16((uint16_t)eax * 0x64u + rd32(COW_IMG(0x10667a74u))) == 0u)
        {
            eax = (uint16_t)eax * 0x64u + rd32(COW_IMG(0x10667a74u));
        }
        else
        {
            eax = (uint16_t)eax * 0x64u + rd32(COW_IMG(0x10667a74u));
            ecx = rd32(COW_IMG(0x10667a74u));
            if (arg2 == 0u) goto L_1022c1e3;
            if (arg2 >> (rd8(eax + 2u) & 0x1fu) & 1u) goto L_1022c1f6;
L_1022c1e3: ;
            if (arg1 == 0u) goto L_1022c1fb;
            if ((uint32_t)(int16_t)rd16(eax + 2u) == arg1)
            {
                eax = (uint32_t)(int16_t)rd16(eax + 2u);
                goto L_1022c1fb;
            }
            eax = (uint32_t)(int16_t)rd16(eax + 2u);
L_1022c1f6: ;
            wr16(esi, 0u);
        }
    }
L_1022c1fb: ;
    if (edi != 1u)
    {
        esi = esi + 2u;
        edi = edi - 1u;
        goto L_1022c1a9;
    }
    esi = esi + 2u;
    edx = 0u;
    edi = 0u;
L_1022c205: ;
    if (rd16(edi * 2u + sp0 - 0x800u) == 0u)
    {
        esi = (esi & 0xffff0000u) | rd16(edi * 2u + sp0 - 0x800u);
    }
    else
    {
        esi = (esi & 0xffff0000u) | rd16(edi * 2u + sp0 - 0x800u);
        if ((int32_t)edx < 1024)
        {
            eax = edx;
            ecx = edx * 2u + self + 0x80u;
L_1022c220: ;
            if (rd16(ecx) == 0u) goto L_1022c233;
            if ((int32_t)(eax + 1u) < 1024)
            {
                eax = eax + 1u;
                ecx = ecx + 2u;
                goto L_1022c220;
            }
        }
    }
L_1022c23e: ;
    if ((int32_t)(edi + 1u) < 1024)
    {
        edi = edi + 1u;
        goto L_1022c205;
    }
    g->ebx = rd32(sp0 - 0x808u);
    g->esi = rd32(sp0 - 0x810u);
    g->edi = rd32(sp0 - 0x814u);
    g->ebp = rd32(sp0 - 0x80cu);
    return;
L_1022c233: ;
    wr16(eax * 2u + self + 0x80u, (uint16_t)esi);
    edx = eax + 1u;
    goto L_1022c23e;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1022c070(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1022c070(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
