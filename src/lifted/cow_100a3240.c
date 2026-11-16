/* f_0x100a3240 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_100a3240(Guest* g)
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
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 44u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_ebx);
    wr32(sp0 - 0xcu, in_ebp);
    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    t1 = rd32(COW_IMG(0x10578158u));
    wr8(sp0 - 4u, 0xc8u);
    wr8(sp0 - 3u, 0u);
    wr8(sp0 - 2u, 0u);
    if (t1 != 0u)
    {
        edi = arg1;
        eax = 0u;
        ecx = 0xffffffffu;
        cf = 0u;
        pf = PARITY(0u);
        af = 0u;
        zf = 1u;
        sf = 0u;
        of = 0u;
        while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
        t2 = ~ecx - 1u;
        if (arg1 >= arg1 + t2) goto L_100a3305;
        ebx = in_ebx;
        ebp = arg1;
        edi = arg1 + t2;
L_100a327f: ;
        if (ebp >= edi)
        {
            esi = ebp;
        }
        else
        {
            esi = ebp;
            ecx = ebp + 1u;
            edx = 0u;
L_100a328a: ;
            if (rd8(esi) == 0u)
            {
                eax = (eax & 0xffffff00u) | rd8(esi);
                goto L_100a32d4;
            }
            eax = (eax & 0xffffff00u) | rd8(esi);
            if ((uint8_t)eax == 7u) goto L_100a32d3;
            if ((uint8_t)eax == 0xdu) goto L_100a32d3;
            if ((uint8_t)eax == 0xau) goto L_100a32d3;
            if ((int8_t)eax >= 0) goto L_100a32bd;
            if (ebp - esi + 0x800u <= 2u)
            {
                eax = ebp - esi + 0x800u;
                goto L_100a32d4;
            }
            eax = ebp - esi + 0x800u;
            if (edi <= ecx) goto L_100a32ce;
            ecx = ecx + 2u;
            edx = edx + 2u;
            esi = esi + 2u;
L_100a32c0: ;
            if (edx >= 0x800u) goto L_100a32d4;
            if (esi < edi) goto L_100a328a;
L_100a32d4: ;
            if (esi != ebp)
            {
                wr32(sp0 - 0x18u, 0u);
                wr32(sp0 - 0x1cu, 1u);
                wr32(sp0 - 0x20u, 0u);
                t3 = rd8(esi);
                wr8(esi, 0u);
                wr32(sp0 - 0x24u, sp0 - 4u);
                wr32(sp0 - 0x28u, ebp);
                g->ebx = (ebx & 0xffffff00u) | t3;
                g->eax = eax;
                g->esp = sp0 - 0x14u;
                t4 = cow_thiscall(g, COW_IMG(0x10127c00u), rd32(COW_IMG(0x10578158u)), 5, ebp, sp0 - 4u, 0u, 1u, 0u);
                wr8(esi, (uint8_t)t3);
                eax = t4;
                ebx = (ebx & 0xffffff00u) | t3;
            }
        }
        if (rd8(esi) == 0u) goto L_100a3305;
        if (esi < edi)
        {
            ebp = esi;
            goto L_100a327f;
        }
    }
L_100a3305: ;
    g->ebx = in_ebx;
    return;
L_100a32bd: ;
    ecx = ecx + 1u;
    edx = edx + 1u;
    esi = esi + 1u;
    goto L_100a32c0;
L_100a32ce: ;
    wr8(esi, 0u);
    goto L_100a32d4;
L_100a32d3: ;
    esi = esi + 1u;
    goto L_100a32d4;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a3240(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100a3240(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
