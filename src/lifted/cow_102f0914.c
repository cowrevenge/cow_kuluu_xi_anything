/* f_0x102f0914 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102f0914(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_8;
    uint32_t of;
    uint32_t pf;
    uint32_t sf;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t zf;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd8(arg1 + 9u) >= 8u)
    {
        edx = in_edx;
    }
    else
    {
        ecx = (self & 0xffffff00u) | rd8(arg1 + 9u);
        if ((uint8_t)ecx == 1u)
        {
            eax = rd32(arg1);
            goto L_102f09c8;
        }
        eax = rd32(arg1);
        ecx = (uint8_t)ecx - 1u;
        if (ecx == 1u) goto L_102f0987;
        ecx = ecx - 1u;
        if (ecx != 2u)
        {
            ecx = ecx - 2u;
            edx = in_edx;
            goto L_102f0a07;
        }
        if (eax == 0u)
        {
            ecx = (eax - 1u & 1u) << 2u;
            edx = 4u - ((eax - 1u & 1u) << 2u);
            goto L_102f0a07;
        }
        ecx = (eax - 1u & 1u) << 2u;
        edx = 4u - ((eax - 1u & 1u) << 2u);
        esi = arg2 + ((eax - 1u) >> 1u);
        edi = arg2 + eax - 1u;
        pf = PARITY((uint8_t)eax);
        zf = eax == 0u;
        sf = (int32_t)eax < 0;
        ebx = arg1;
        cf = 0u;
        of = 0u;
        loc_8 = eax;
L_102f0967: ;
        t1 = rd8(esi);
        wr8(edi, ((edx & 0x1fu) != 0u ? t1 >> (edx & 0x1fu) : t1) & 0xfu);
        if (edx != 4u)
        {
            ecx = (ecx & 0xffffff00u) | (uint8_t)edx;
            ebx = (ebx & 0xffffff00u) | (((edx & 0x1fu) != 0u ? t1 >> (edx & 0x1fu) : t1) & 0xfu);
            cf = edx < 4u;
            edx = 4u;
        }
        else
        {
            ecx = (ecx & 0xffffff00u) | (uint8_t)edx;
            ebx = (ebx & 0xffffff00u) | (((edx & 0x1fu) != 0u ? t1 >> (edx & 0x1fu) : t1) & 0xfu);
            edx = 0u;
            esi = esi - 1u;
            cf = 0u;
        }
        if (loc_8 != 1u)
        {
            edi = edi - 1u;
            pf = PARITY((uint8_t)(loc_8 - 1u));
            zf = loc_8 == 1u;
            sf = (int32_t)(loc_8 - 1u) < 0;
            of = loc_8 == 0x80000000u;
            loc_8 = loc_8 - 1u;
            goto L_102f0967;
        }
L_102f0a04: ;
L_102f0a07: ;
        t4 = rd8(arg1 + 0xau);
        wr8(arg1 + 9u, 8u);
        wr8(arg1 + 0xbu, (uint8_t)(t4 << 3u));
        wr32(arg1 + 4u, t4 * eax);
        edx = (edx & 0xffffff00u) | (uint8_t)(t4 << 3u);
    }
    g->edx = edx;
    return;
L_102f0987: ;
    if (eax == 0u)
    {
        ecx = (eax - 1u & 3u) << 1u;
        edx = 6u - ((eax - 1u & 3u) << 1u);
        goto L_102f0a07;
    }
    ecx = (eax - 1u & 3u) << 1u;
    edx = 6u - ((eax - 1u & 3u) << 1u);
    esi = arg2 + ((eax - 1u) >> 2u);
    edi = arg2 + eax - 1u;
    pf = PARITY((uint8_t)eax);
    zf = eax == 0u;
    sf = (int32_t)eax < 0;
    ebx = arg1;
    cf = 0u;
    of = 0u;
    loc_8 = eax;
L_102f09a9: ;
    t2 = rd8(esi);
    wr8(edi, ((edx & 0x1fu) != 0u ? t2 >> (edx & 0x1fu) : t2) & 3u);
    if (edx != 6u)
    {
        ecx = (ecx & 0xffffff00u) | (uint8_t)edx;
        ebx = (ebx & 0xffffff00u) | (((edx & 0x1fu) != 0u ? t2 >> (edx & 0x1fu) : t2) & 3u);
        cf = edx < 6u;
        edx = edx + 2u;
    }
    else
    {
        ecx = (ecx & 0xffffff00u) | (uint8_t)edx;
        ebx = (ebx & 0xffffff00u) | (((edx & 0x1fu) != 0u ? t2 >> (edx & 0x1fu) : t2) & 3u);
        edx = 0u;
        esi = esi - 1u;
        cf = 0u;
    }
    if (loc_8 != 1u)
    {
        edi = edi - 1u;
        pf = PARITY((uint8_t)(loc_8 - 1u));
        zf = loc_8 == 1u;
        sf = (int32_t)(loc_8 - 1u) < 0;
        of = loc_8 == 0x80000000u;
        loc_8 = loc_8 - 1u;
        goto L_102f09a9;
    }
    goto L_102f0a04;
L_102f09c8: ;
    if (eax == 0u)
    {
        ecx = eax - 1u & 7u;
        edx = 7u - (eax - 1u & 7u);
        goto L_102f0a07;
    }
    ecx = eax - 1u & 7u;
    edx = 7u - (eax - 1u & 7u);
    esi = arg2 + ((eax - 1u) >> 3u);
    edi = arg2 + eax - 1u;
    pf = PARITY((uint8_t)eax);
    zf = eax == 0u;
    sf = (int32_t)eax < 0;
    ebx = arg1;
    cf = 0u;
    of = 0u;
    loc_8 = eax;
L_102f09e8: ;
    t3 = rd8(esi);
    wr8(edi, ((edx & 0x1fu) != 0u ? t3 >> (edx & 0x1fu) : t3) & 1u);
    if (edx != 7u)
    {
        ecx = (ecx & 0xffffff00u) | (uint8_t)edx;
        ebx = (ebx & 0xffffff00u) | (((edx & 0x1fu) != 0u ? t3 >> (edx & 0x1fu) : t3) & 1u);
        cf = edx < 7u;
        edx = edx + 1u;
    }
    else
    {
        ecx = (ecx & 0xffffff00u) | (uint8_t)edx;
        ebx = (ebx & 0xffffff00u) | (((edx & 0x1fu) != 0u ? t3 >> (edx & 0x1fu) : t3) & 1u);
        edx = 0u;
        esi = esi - 1u;
        cf = 0u;
    }
    if (loc_8 != 1u)
    {
        edi = edi - 1u;
        pf = PARITY((uint8_t)(loc_8 - 1u));
        zf = loc_8 == 1u;
        sf = (int32_t)(loc_8 - 1u) < 0;
        of = loc_8 == 0x80000000u;
        loc_8 = loc_8 - 1u;
        goto L_102f09e8;
    }
    goto L_102f0a04;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f0914(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102f0914(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
