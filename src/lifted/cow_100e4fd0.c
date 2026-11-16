/* f_0x100e4fd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100e4fd0(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t of;
    uint32_t pf;
    uint32_t sf;
    uint32_t t1;
    uint32_t t10;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;

    if (rd32(sp0 + 4u) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
        loc_4 = 0u;
    }
    else
    {
        ebp = rd32(sp0 + 4u);
        t1 = rd32(sp0 + 0xcu);
        wr32(sp0 + 4u, 0x40u);
        eax = t1;
        edx = in_edx;
        ebx = in_ebx;
        edi = t1 + 6u;
        loc_4 = 0u;
L_100e4ff8: ;
        if (rd16(edi - 2u) != 0u)
        {
            eax = (eax & 0xffff0000u) | rd16(edi - 2u);
            wr8(sp0 + 0xcu, (uint8_t)(eax >> 5u));
            if ((uint8_t)(eax >> 5u) < 0x18u)
            {
                if ((int32_t)(eax & 0x1fu) >= 0)
                {
                    eax = eax & 0x1fu;
                    ecx = (uint8_t)rd32(sp0 + 0xcu);
                }
                else
                {
                    eax = eax & 0x1fu;
                    ecx = (uint8_t)rd32(sp0 + 0xcu);
                    eax = (eax - 1u | 0xffffffe0u) + 1u;
                }
                t2 = rd16(edi);
                t3 = rd16(eax * 2u + ebp + ecx * 0x40u + 0x2d010u);
                wr16(eax * 2u + ebp + ecx * 0x40u + 0x2d010u, (uint16_t)(((t2 >> 0xau ^ t3) & 0x3fu) ^ t3));
                t4 = rd16(edi);
                wr16(eax * 2u + ebp + ecx * 0x40u + 0x2d010u, (uint16_t)(((t2 >> 0xau ^ t3 ^ t3) & 0x3fu) ^ t4 << 6u));
                t5 = loc_4 | 1u << (ecx & 0x1fu);
                edx = ((ecx << 5u | t3) & 0xffff0000u) | (uint16_t)(t4 << 6u);
                ebx = ((t2 >> 0xau ^ t3 ^ t3) & 0x3fu) ^ (((ecx << 5u | t3) & 0xffff0000u) | (uint16_t)(t4 << 6u));
                loc_4 = t5;
            }
        }
        t6 = rd32(sp0 + 4u) - 1u;
        t7 = rd32(sp0 + 4u);
        wr32(sp0 + 4u, t6);
        if (t7 != 1u)
        {
            eax = t6;
            edi = edi + 4u;
            goto L_100e4ff8;
        }
        if (rd32(ebp + 0x2d610u) == 0u)
        {
            eax = rd32(ebp + 0x2d610u);
        }
        else
        {
            eax = rd32(ebp + 0x2d610u);
            esi = 0u;
            edi = loc_4;
            cf = 0u;
            pf = PARITY(0u);
            zf = 1u;
            sf = 0u;
            of = 0u;
L_100e5096: ;
            if ((edi & 1u << (esi & 0x1fu)) == 0u)
            {
                edx = 1u << (esi & 0x1fu);
            }
            else
            {
                ecx = esi;
                edx = 1u << (esi & 0x1fu);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x14u;
                t8 = cow_thiscall_cdecl(g, rd32(ebp + 0x2d610u), ecx, 1, esi);
                t9 = g->edx;
                eax = t8;
                edx = t9;
            }
            if ((int32_t)(esi + 1u) < 24)
            {
                cf = esi + 1u < 0x18u;
                pf = PARITY((uint8_t)(esi - 0x17u));
                zf = esi == 0x17u;
                sf = (int32_t)(esi - 0x17u) < 0;
                of = ((esi + 1u ^ 0x18u) & (esi + 1u ^ esi - 0x17u)) >> 0x1fu;
                esi = esi + 1u;
                goto L_100e5096;
            }
        }
        t10 = rd8(ebp + 0x40db5u);
        wr8(ebp + 0x40db5u, (uint8_t)(t10 | 1u));
        eax = (eax & 0xffffff00u) | t10 | 1u;
    }
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e4fd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100e4fd0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
