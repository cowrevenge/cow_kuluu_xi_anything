/* f_0x102f77ea - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102f77ea(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t pf;
    uint32_t sf;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg3 != 0xffu)
    {
        ecx = rd8(arg1 + 0xfbu);
        if (ecx == 1u)
        {
            if (rd32(arg1 + 0xb8u) == 0u)
            {
                edx = 7u;
            }
            else
            {
                eax = rd32(arg1 + 0xb8u);
                esi = rd32(arg1 + 0xdcu) + 1u;
                edx = 7u;
                edi = arg2;
                loc_c = 0x80u;
                loc_10 = eax;
L_102f79b0: ;
                if ((loc_c & arg3) != 0u)
                {
                    pf = PARITY((uint8_t)(loc_c & arg3));
                    zf = (loc_c & arg3) == 0u;
                    sf = (int32_t)(loc_c & arg3) < 0;
                    t5 = ((uint8_t)(uint32_t)((int32_t)0x7f7fu >> ((7u - edx & 0x1fu) < 0x20u ? 7u - edx & 0x1fu : 0x1fu)) & rd8(edi)) | (uint8_t)((edx & 0x1fu) != 0u ? (uint8_t)((rd8(esi) >> (edx & 0x1fu) & 1u) << (edx & 0x1fu)) : rd8(esi) >> (edx & 0x1fu) & 1u);
                    wr8(edi, (uint8_t)t5);
                    ecx = edx;
                }
                if (edx != 0u)
                {
                    edx = edx - 1u;
                }
                else
                {
                    edx = 7u;
                    esi = esi + 1u;
                    edi = edi + 1u;
                }
                if (loc_c != 1u)
                {
                    loc_c = (uint32_t)((int32_t)loc_c >> 1u);
                }
                else
                {
                    loc_c = 0x80u;
                }
                if (loc_10 != 1u)
                {
                    loc_10 = loc_10 - 1u;
                    goto L_102f79b0;
                }
            }
        }
        else
        {
            edx = ecx - 1u;
            if (edx == 1u)
            {
                if (rd32(arg1 + 0xb8u) == 0u)
                {
                    edx = 6u;
                }
                else
                {
                    eax = rd32(arg1 + 0xb8u);
                    esi = rd32(arg1 + 0xdcu) + 1u;
                    edx = 6u;
                    edi = arg2;
                    loc_c = 0x80u;
                    loc_10 = eax;
L_102f7941: ;
                    if ((loc_c & arg3) != 0u)
                    {
                        pf = PARITY((uint8_t)(loc_c & arg3));
                        zf = (loc_c & arg3) == 0u;
                        sf = (int32_t)(loc_c & arg3) < 0;
                        t4 = ((uint8_t)(uint32_t)((int32_t)0x3f3fu >> ((6u - edx & 0x1fu) < 0x20u ? 6u - edx & 0x1fu : 0x1fu)) & rd8(edi)) | (uint8_t)((edx & 0x1fu) != 0u ? (uint8_t)((rd8(esi) >> (edx & 0x1fu) & 3u) << (edx & 0x1fu)) : rd8(esi) >> (edx & 0x1fu) & 3u);
                        wr8(edi, (uint8_t)t4);
                        ecx = edx;
                    }
                    if (edx != 0u)
                    {
                        edx = edx - 2u;
                    }
                    else
                    {
                        edx = 6u;
                        esi = esi + 1u;
                        edi = edi + 1u;
                    }
                    if (loc_c != 1u)
                    {
                        loc_c = (uint32_t)((int32_t)loc_c >> 1u);
                    }
                    else
                    {
                        loc_c = 0x80u;
                    }
                    if (loc_10 != 1u)
                    {
                        loc_10 = loc_10 - 1u;
                        goto L_102f7941;
                    }
                }
            }
            else
            {
                edx = edx - 1u;
                if (edx == 2u)
                {
                    if (rd32(arg1 + 0xb8u) == 0u)
                    {
                        edx = 4u;
                    }
                    else
                    {
                        eax = rd32(arg1 + 0xb8u);
                        esi = rd32(arg1 + 0xdcu) + 1u;
                        edx = 4u;
                        edi = arg2;
                        loc_c = 0x80u;
                        loc_10 = eax;
L_102f78ca: ;
                        if ((loc_c & arg3) != 0u)
                        {
                            pf = PARITY((uint8_t)(loc_c & arg3));
                            zf = (loc_c & arg3) == 0u;
                            sf = (int32_t)(loc_c & arg3) < 0;
                            t3 = ((uint8_t)(uint32_t)((int32_t)0xf0fu >> ((4u - edx & 0x1fu) < 0x20u ? 4u - edx & 0x1fu : 0x1fu)) & rd8(edi)) | (uint8_t)((edx & 0x1fu) != 0u ? (uint8_t)((rd8(esi) >> (edx & 0x1fu) & 0xfu) << (edx & 0x1fu)) : rd8(esi) >> (edx & 0x1fu) & 0xfu);
                            wr8(edi, (uint8_t)t3);
                            ecx = edx;
                        }
                        if (edx != 0u)
                        {
                            edx = edx - 4u;
                        }
                        else
                        {
                            edx = 4u;
                            esi = esi + 1u;
                            edi = edi + 1u;
                        }
                        if (loc_c != 1u)
                        {
                            loc_c = (uint32_t)((int32_t)loc_c >> 1u);
                        }
                        else
                        {
                            loc_c = 0x80u;
                        }
                        if (loc_10 != 1u)
                        {
                            loc_10 = loc_10 - 1u;
                            goto L_102f78ca;
                        }
                    }
                }
                else
                {
                    if (rd32(arg1 + 0xb8u) == 0u)
                    {
                        edx = rd32(arg1 + 0xdcu) + 1u;
                    }
                    else
                    {
                        eax = rd32(arg1 + 0xb8u);
                        edx = rd32(arg1 + 0xdcu) + 1u;
                        loc_c = ecx >> 3u;
                        loc_8 = (rd32(sp0 - 8u) & 0xffffffu) | 0x80000000u;
                        ebx = arg2;
                        loc_10 = eax;
L_102f7869: ;
                        if ((loc_8 >> 0x18u & (uint8_t)arg3) == 0u)
                        {
                            eax = (eax & 0xffffff00u) | (uint8_t)arg3;
                        }
                        else
                        {
                            esi = edx;
                            edi = ebx;
                            ecx = loc_c >> 2u;
                            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                            ecx = loc_c & 3u;
                            while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
                            eax = loc_c;
                        }
                        if (loc_8 >> 0x18u != 1u)
                        {
                            edx = edx + loc_c;
                            ebx = ebx + loc_c;
                            loc_8 = (loc_8 & 0xffffffu) | loc_8 >> 0x19u << 0x18u;
                        }
                        else
                        {
                            edx = edx + loc_c;
                            ebx = ebx + loc_c;
                            loc_8 = (loc_8 & 0xffffffu) | 0x80000000u;
                        }
                        if (loc_10 != 1u)
                        {
                            loc_10 = loc_10 - 1u;
                            goto L_102f7869;
                        }
                    }
                }
            }
        }
    }
    else
    {
        ecx = rd8(arg1 + 0xfbu);
        t1 = (ecx * rd32(arg1 + 0xb8u) + 7u) >> 3u;
        t2 = rd32(arg1 + 0xdcu);
        esi = t2 + 1u;
        edi = arg2;
        ecx = t1 >> 2u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        ecx = t1 & 3u;
        while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
        edx = in_edx;
    }
    g->edx = edx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f77ea(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102f77ea(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
