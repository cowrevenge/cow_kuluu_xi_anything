/* f_0x101e9110 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101e9110(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t of;
    uint32_t pf;
    uint32_t sf;
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
    double x0;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    if (rd32(COW_IMG(0x10663648u)) != 0u)
    {
        g->esp = sp0 - 0x1cu;
        t1 = cow_cdecl(g, COW_IMG(0x101e8500u), 1, 0u);
        if (t1 != 0u)
        {
            edi = t1;
            wr32(self + 0x58u, 0xbf800000u);
            wr32(self + 0x5cu, 0xbf800000u);
            wr32(self + 0x60u, 0xbf800000u);
            t2 = rd32(rd32(COW_IMG(0x10663648u)) + 0x16cu);
            if (rd32(rd32(COW_IMG(0x10663648u)) + 0x16cu) != rd32(rd32(COW_IMG(0x10663648u)) + 0x170u))
            {
                eax = rd32(COW_IMG(0x10663648u));
                edx = rd32(rd32(COW_IMG(0x10663648u)) + 0x170u);
                ebx = t2;
                goto L_101e928e;
            }
            edx = rd32(rd32(COW_IMG(0x10663648u)) + 0x170u);
            ebx = t2;
            loc_10 = t2;
            if (rd32(COW_IMG(0x104dfd98u)) == 0u)
            {
                eax = rd32(COW_IMG(0x104dfd98u));
                goto L_101e928e;
            }
            eax = rd32(COW_IMG(0x104dfd98u));
            t3 = rd32(eax + 0x3c350u);
            g->ecx = self + 0x58u;
            g->edx = edx;
            g->esp = sp0 - 0x24u;
            t4 = cow_cdecl(g, COW_IMG(0x101e6ca0u), 2, t3, 1u);
            t5 = g->ecx;
            t6 = g->edx;
            if ((uint8_t)t4 == 0u)
            {
                eax = t4;
                edx = t6;
                goto L_101e928a;
            }
            ecx = t5;
            eax = 0u;
            edx = 0u;
            esi = 0u;
            cf = 0u;
            pf = PARITY(0u);
            zf = 1u;
            sf = 0u;
            of = 0u;
            x0 = (double)rdf32(COW_IMG(0x103295d8u));
L_101e91a9: ;
            if ((((eax & 0x1fu) != 0u ? (uint8_t)(uint32_t)((int32_t)(uint32_t)(int8_t)rd8(ebx * 4u + edi + 2u) >> ((eax & 0x1fu) < 8u ? eax & 0x1fu : 7u)) : rd8(ebx * 4u + edi + 2u)) & 3u) == 1u)
            {
                wr8(self + 0x18u, (uint8_t)edx);
                esi = esi + 1u;
            }
            t7 = (uint32_t)(int8_t)rd8(edi + edx + 0x82u);
            if ((int32_t)(eax + 2u) < 6)
            {
                ecx = t7;
                edx = edx + 1u;
                cf = eax + 2u < 6u;
                pf = PARITY((uint8_t)(eax - 4u));
                zf = eax == 4u;
                sf = (int32_t)(eax - 4u) < 0;
                of = ((eax + 2u ^ 6u) & (eax + 2u ^ eax - 4u)) >> 0x1fu;
                eax = eax + 2u;
                x0 = fr(g, x0 + (double)(int32_t)t7);
                goto L_101e91a5;
            }
            eax = eax + 2u;
            x0 = fr(g, x0 + (double)(int32_t)t7);
            if ((int32_t)esi > 1)
            {
                wr8(self + 0x18u, 4u);
            }
            if ((rd8(edi + loc_10 * 4u + 4u) & 0x40u) == 0u)
            {
                ebp = edi + loc_10 * 4u + 4u;
            }
            else
            {
                ebp = edi + loc_10 * 4u + 4u;
                wr8(self + 0x18u, 3u);
            }
            t8 = rd32(edi + 0x90u);
            eax = t8;
            ecx = 0u;
            edx = self + 0x58u;
            x0 = fr(g, x0 + (double)(int32_t)t8);
L_101e9215: ;
            if (x0 == (double)rdf32(COW_IMG(0x103295d8u)))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
                wr32(edx, 0u);
            }
            else
            {
                t9 = (uint32_t)(int8_t)rd8(ecx + edi + 0x82u);
                wrf32(edx, (float)fr(g, (double)(int32_t)t9 / x0));
                eax = t9;
            }
            if ((int32_t)(ecx + 1u) < 3)
            {
                ecx = ecx + 1u;
                edx = edx + 4u;
                goto L_101e9215;
            }
            edx = edx + 4u;
            if (x0 == (double)rdf32(COW_IMG(0x103295d8u)))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
                wr32(self + 0x64u, 0u);
                wr8(self + 0x14u, 1u);
                ebx = loc_10;
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
                t10 = rd32(edi + 0x90u);
                wr8(self + 0x14u, 1u);
                wrf32(self + 0x64u, (float)fr(g, (double)(int64_t)cow_i64(t10, 0u) / x0));
                ebx = loc_10;
            }
L_101e92d8: ;
            t13 = rd8(ebx * 4u + edi + 5u);
            wr8(self + 0x15u, (uint8_t)(t13 - 1u));
            if ((int8_t)(t13 - 1u) >= 0)
            {
                eax = (eax & 0xffffff00u) | (uint8_t)(t13 - 1u);
            }
            else
            {
                eax = (eax & 0xffffff00u) | (uint8_t)(t13 - 1u);
                wr8(self + 0x15u, 4u);
            }
            t14 = rd8(ebp);
            wr8(self + 0x16u, t14 >> 6u & 1u);
            wr8(self + 0x17u, rd8(edi + 0x88u));
            g->esp = sp0 - 0x24u;
            cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10381f34u), 1u, 0u);
        }
    }
    return;
L_101e91a5: ;
    ebx = loc_10;
    goto L_101e91a9;
L_101e928a: ;
L_101e928e: ;
    if ((int8_t)rd8(ebx * 4u + edi + 4u) >= 0)
    {
        ebp = ebx * 4u + edi + 4u;
        eax = 0u;
        ecx = self + 0x58u;
        esi = self + 0x58u;
        cf = 0u;
        pf = PARITY(0u);
        zf = 1u;
        sf = 0u;
        of = 0u;
L_101e92ad: ;
        t11 = (uint32_t)(int8_t)(((eax & 0x1fu) != 0u ? (uint8_t)(uint32_t)((int32_t)(uint32_t)(int8_t)rd8(ebp) >> ((eax & 0x1fu) < 8u ? eax & 0x1fu : 7u)) : rd8(ebp)) & 3u);
        t12 = rd8(ebp);
        wrf32(esi, (float)(double)(int32_t)t11);
        if ((int32_t)(eax + 2u) < 6)
        {
            ecx = t11;
            edx = (edx & 0xffffff00u) | (((eax & 0x1fu) != 0u ? (uint8_t)(uint32_t)((int32_t)(uint32_t)(int8_t)t12 >> ((eax & 0x1fu) < 8u ? eax & 0x1fu : 7u)) : t12) & 3u);
            esi = esi + 4u;
            cf = eax + 2u < 6u;
            pf = PARITY((uint8_t)(eax - 4u));
            zf = eax == 4u;
            sf = (int32_t)(eax - 4u) < 0;
            of = ((eax + 2u ^ 6u) & (eax + 2u ^ eax - 4u)) >> 0x1fu;
            eax = eax + 2u;
            goto L_101e92ad;
        }
        edx = (edx & 0xffffff00u) | (((eax & 0x1fu) != 0u ? (uint8_t)(uint32_t)((int32_t)(uint32_t)(int8_t)t12 >> ((eax & 0x1fu) < 8u ? eax & 0x1fu : 7u)) : t12) & 3u);
        eax = eax + 2u;
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(ebx * 4u + edi + 4u);
        ebp = ebx * 4u + edi + 4u;
        wr32(self + 0x58u, 0x40800000u);
        wr32(self + 0x5cu, 0x40800000u);
        wr32(self + 0x60u, 0x40800000u);
        edx = 0x40800000u;
    }
    wr8(self + 0x14u, 0u);
    goto L_101e92d8;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e9110(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101e9110(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
