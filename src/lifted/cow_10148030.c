/* f_0x10148030 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10148030(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_44;
    uint32_t of;
    uint32_t pf;
    uint32_t sf;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 100u);

    wr32(sp0 - 0x2cu, in_ebx);
    wr32(sp0 - 0x30u, 1u);
    g->esp = sp0 - 0x2cu;
    t1 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 1u);
    wr32(sp0 - 0x14u, t1);
    if (t1 == 0u)
    {
        eax = t1;
        edx = t1;
    }
    else
    {
        eax = t1;
        edx = t1;
        loc_14 = t1;
        wr32(sp0 - 0x30u, in_ebp);
        wr32(sp0 - 0x34u, in_esi);
        wr32(sp0 - 0x38u, in_edi);
        wr32(sp0 - 0x24u, 0u);
        wr32(sp0 - 0x18u, 1u);
        wr32(sp0 - 0x20u, 0x354u);
        eax = 1u;
        ebp = (in_ebp & 0xffff0000u) | (uint16_t)(rd16(self + 0x86u) + 0x13u);
        esi = 0x354u;
        loc_24 = 0u;
        loc_18 = 1u;
        loc_20 = 0x354u;
L_101480a2: ;
        if (esi != 0x3acu)
        {
            cf = esi < 0x3acu;
            pf = PARITY((uint8_t)(esi - 0x3acu));
            zf = esi == 0x3acu;
            sf = (int32_t)(esi - 0x3acu) < 0;
            of = ((esi ^ 0x3acu) & (esi ^ esi - 0x3acu)) >> 0x1fu;
            if ((rd32(self + 0x80u) & 1u << (eax & 0x1fu)) != 0u)
            {
                ecx = eax;
                wr32(sp0 - 0x3cu, 0u);
                wr32(sp0 - 0x40u, 0u);
                if (eax != (uint32_t)(int8_t)rd8(self + 0x15u))
                {
                    ecx = rd32(esi + rd32(edx));
                    edi = loc_24 & 1u;
                    if (eax != (uint32_t)(int8_t)rd8(self + 0x16u))
                    {
                        wr32(sp0 - 0x44u, 0x80808080u);
                        loc_44 = 0x80808080u;
                    }
                    else
                    {
                        wr32(sp0 - 0x44u, 0x804070a0u);
                        loc_44 = 0x804070a0u;
                    }
                }
                else
                {
                    ecx = rd32(esi + rd32(edx));
                    edi = loc_24 & 1u;
                    wr32(sp0 - 0x44u, 0x80e09620u);
                    loc_44 = 0x80e09620u;
                }
                wr32(sp0 - 0x48u, (uint32_t)(int16_t)ebp);
                t2 = (uint32_t)(int16_t)rd16(sp0 + (uint32_t)(int16_t)edi * 2u - 0x28u);
                wr32(sp0 - 0x4cu, t2);
                g->esp = sp0 - 0x38u;
                cow_thiscall(g, COW_IMG(0x1011fb60u), ecx, 5, t2, (uint32_t)(int16_t)ebp, loc_44, 0u, 0u);
                t3 = rd32(self + rd32(sp0 - 0x20u) - 0x330u);
                wr32(sp0 - 0x3cu, t3);
                wr32(sp0 - 0x40u, COW_IMG(0x10352ff0u));
                wr32(sp0 - 0x44u, sp0 - 0x10u);
                g->ebx = self;
                g->ecx = t3;
                g->edx = sp0 - 0x10u;
                g->esp = sp0 - 0x30u;
                cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x10u, COW_IMG(0x10352ff0u), t3, in_edi, in_esi);
                t4 = g->ecx;
                t5 = g->edx;
                wr32(sp0 - 0x48u, 0x3f800000u);
                wr32(sp0 - 0x4cu, 0x3f800000u);
                wr32(sp0 - 0x50u, 1u);
                wr32(sp0 - 0x54u, 0x80808080u);
                wr32(sp0 - 0x58u, sp0 - 0x10u);
                wr32(sp0 - 0x5cu, ebp);
                t6 = (t4 & 0xffff0000u) | rd16(sp0 + (uint32_t)(int16_t)edi * 2u - 0x1cu);
                wr32(sp0 - 0x60u, t6);
                g->esp = sp0 - 0x44u;
                cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), t6, 7, t6, ebp, sp0 - 0x10u, 0x80808080u, 1u, 0x3f800000u, 0x3f800000u);
                if ((uint16_t)edi != 0u)
                {
                    ebp = ebp + 0xeu;
                }
                t7 = rd32(sp0 - 0x24u) + 1u;
                wr32(sp0 - 0x24u, t7);
                eax = rd32(sp0 - 0x18u);
                edx = rd32(sp0 - 0x14u);
                esi = rd32(sp0 - 0x20u);
                loc_24 = t7;
            }
        }
        wr32(sp0 - 0x18u, eax + 1u);
        wr32(sp0 - 0x20u, esi + 4u);
        if ((int32_t)(esi + 4u) < 944)
        {
            loc_18 = eax + 1u;
            eax = eax + 1u;
            loc_20 = esi + 4u;
            esi = esi + 4u;
            goto L_101480a2;
        }
        eax = eax + 1u;
    }
    g->ebx = in_ebx;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10148030(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10148030(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
